#include <iostream>

#include "matrix.h"

void print_size(Matrix<int, -1> & m)
{
	std::cout << m.size() << std::endl;
}

int main(int argc, char *argv[])
{
	Matrix<int, -1> matrix;

	//auto value = matrix[1][2];

	//auto value = matrix[50][100];

//	std::cout << value << std::endl;

	//print_size(matrix);
	std::cout << matrix.size() << std::endl;
	matrix[50][100] = 30;

	auto value = matrix[50][100];

//	print_size(matrix);
	std::cout << matrix.size() << std::endl;
	
	std::cout << value << std::endl;



	return 0;
}