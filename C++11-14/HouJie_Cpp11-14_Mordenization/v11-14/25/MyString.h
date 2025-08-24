#pragma once

#include <iostream>
#include <string>

class MyString
{
    public:
        static size_t DCtor;
        static size_t Ctor;
        static size_t CCtor;
        static size_t CAsgn;
        static size_t MCtor;
        static size_t MAsgn;
        static size_t Dtor;
    private:
        char* _data;
        size_t _len;
    private:
        void _init_data(const char* s)
        {
            _data = new char[_len + 1];
            memcpy(_data, s, _len);
            _data[_len] = '\0';
        }
    public:
        MyString() : _data(nullptr), _len(0) { DCtor++; }     
        MyString(const char* p) : _len(strlen(p))
        {
            Ctor++;
            _init_data(p);
        }
        MyString(const MyString& str) : _len(str._len)
        {
            CCtor++;
            _init_data(str._data);
        }
        MyString(MyString&& str) noexcept : _data(str._data), _len(str._len)
        {
            MCtor++;
            str._len = 0;
            str._data = nullptr;
        }
        MyString& operator=(const MyString& str)
        {
            CAsgn++;
            if (this != &str)
            {
                if (_data)
                {
                    delete[] _data;
                }
                _len = str._len;
                _init_data(str._data);
            }
            return *this;
        }
        MyString& operator=(MyString&& str) noexcept
        {
            MAsgn++;
            if (this != &str)
            {
                if (_data)
                {
                    delete[] _data;
                }
                _len = str._len;
                _data = str._data;
                str._len = 0;
                str._data = nullptr;
            }
            return *this;
        }
        bool operator<(const MyString& rhs) const { return std::string(this -> _data) < std::string(rhs._data); }
        bool operator==(const MyString& rhs) const { return std::string(this -> _data) == std::string(rhs._data); }
        char* get() const { return _data; }
        friend std::ostream& operator<<(std::ostream& os, const MyString& str);
        virtual ~MyString()
        {
            Dtor++;
            delete[] _data;
        }
};