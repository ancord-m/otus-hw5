#include <iostream>

#include "matrix.h"

int main(int argc, char *argv[])
{
	Matrix<int, -1> matrix;

	//auto value = matrix[1][2];

	auto value = matrix[0][0];

	std::cout << value << std::endl;

	return 0;
}