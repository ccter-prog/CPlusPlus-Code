#include <iostream>
#include <vector>

/* 定义一个别名 Matrix，表示二维 vector（即 std::vector<std::vector<double>>）。
再定义函数指针别名 MatrixOp，表示函数 Matrix(const Matrix&)。 */

using Matrix = std::vector<std::vector<double>>;
using MatrixOp = Matrix(*)(const Matrix&);

Matrix transpose(const Matrix& m)
{
	Matrix result;
	if (!m.empty())
	{
		result.resize(m[0].size(), std::vector<double>(m.size()));
		for (size_t i = 0; i < m.size(); ++i)
		{
			for (size_t j = 0; j < m[0].size(); ++j)
			{
				result[j][i] = m[i][j];
			}
		}
	}
	return result;
}

int main()
{
	Matrix mat = {{1.1, 2.2}, {3.3, 4.4}};
	MatrixOp op = transpose;
	Matrix result = op(mat);
	return 0;
}