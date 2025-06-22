#pragma once

#include <iostream>
#include <fstream>
#include <string>

/* 创建学生成绩文件，包含姓名和成绩
尝试复制文件（逐字节/缓冲区读取写入） */

class Score
{
	public:
		Score(const std::string filename, const int control);
		void print();
		bool input(const std::string name, const int score);
		bool copy(const std::string filename);
		virtual ~Score();
	private:
		std::fstream iof;
		const int control;
		
		struct Student
		{
			char buffer[50];
			int score;
		} student;
};

inline Score::Score(const std::string filename, const int control) : control(control), student{}
{
	switch (control)
	{
		case 1:
		{
			iof.open(filename, std::ios::app | std::ios::in | std::ios::out);
			if (!iof.is_open())
			{
				throw std::runtime_error("文件打开失败");
			}
			break;
		}
		case 2:
		{
			iof.open(filename, std::ios::app | std::ios::binary | std::ios::in | std::ios::out);
			if (!iof.is_open())
			{
				throw std::runtime_error("文件打开失败");
			}
			break;
		}
		default:
		{
			throw std::runtime_error("无效操作");
			break;
		}
	}
}

inline void Score::print()
{
	iof.clear();
	iof.seekg(0, std::ios::beg);
	switch (control)
	{
		case 1:
		{
			std::string line;
			while (std::getline(iof, line))
			{
				std::cout << line << "\n";
			}
			break;
		}
		case 2:
		{
			iof.read((char*)&student, sizeof(Student));
			std::cout << student.buffer << student.score << "\n";
			break;
		}
	}
}

inline bool Score::input(const std::string name, const int score)
{
	iof.clear();
	iof.seekp(0, std::ios::end);
	switch (control)
	{
		case 1:
		{
			iof << name << " " << score << "\n";
			break;
		}
		case 2:
		{
			const char* str = name.c_str();
			int i = 0;
			while (str[i] != '\0')
			{
				student.buffer[i] = str[i];
				i++;
			}
			student.buffer[i] = ' ';
			student.buffer[i + 1] = '\0';
			student.score = score;
			iof.write((const char*)&student, sizeof(Student));
			break;
		}
	}
	return iof.good();
}

inline bool Score::copy(const std::string filename)
{
	bool ret = false;
	std::ofstream fout;
	switch (control)
	{
		case 1:
		{
			fout.open(filename, std::ios::out);
			if (!fout.is_open())
			{
				std::cerr << "文件" << filename << "打开失败" << "\n";
			}
			else
			{
				iof.clear();
				iof.seekg(0, std::ios::beg);
				if (fout << iof.rdbuf())
				{
					ret = true;
				}
				fout.close();
			}
			break;
		}
		case 2:
		{
			fout.open(filename, std::ios::out | std::ios::binary);
			if (!fout.is_open())
			{
				std::cerr << "文件" << filename << "打开失败" << "\n";
			}
			else
			{
				iof.clear();
				iof.seekg(0, std::ios::beg);
				const int BUFFER_SIZE = 4096;
				char buffer[BUFFER_SIZE];
				while (iof.read(buffer, BUFFER_SIZE))
				{
					fout.write(buffer, iof.gcount());
				}
				fout.write(buffer, iof.gcount());
				ret = fout.good();
				fout.close();
			}
		}
	}
	return ret;
}

inline Score::~Score()
{
	iof.close();
}