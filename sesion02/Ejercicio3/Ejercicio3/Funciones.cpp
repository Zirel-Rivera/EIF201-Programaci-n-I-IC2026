#include "Funciones.h"
#include <iostream>
#include <iomanip>

void printMatrix(int matrix[rows][cols])
{

	for (size_t i = 0; i < rows; i++) {
		for (size_t j = 0; j < cols; j++) {
			std::cout << std::setw(6) << matrix[i][j];
		}
		std::cout << std::endl;
	}
}

void sumRows(int matrix[rows][cols])
{
	int sum = 0;
	for (size_t i = 0; i < rows; i++) {
		for (size_t j = 0; j < cols; j++) {
			sum += matrix[i][j];
		}
		std::cout << "Rows " << i + 1 << ": " << sum << std::endl;
	}
}

void sumCols(int matrix[rows][cols])
{
	int sum = 0;
	for (size_t j = 0; j < cols; j++) {
		for (size_t i = 0; i < rows; i++) {
			sum += matrix[j][i];
		}
		std::cout << "Cols " << j + 1 << ": " << sum << std::endl;
	}
}

void sumDiagonal(int matrix[rows][cols])
{
	int sum = 0;
	for (size_t i = 0; i < rows; i++) {
		sum += matrix[i][i];
	}
	std::cout << sum << std::endl;
}


