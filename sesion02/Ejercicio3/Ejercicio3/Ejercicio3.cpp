#include <iostream>
#include "Funciones.h"

int main()
{
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols];

    std::cout << "Ingrese 9 numeros enteros \n";
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {

            std::cin >> matrix[i][j];
        }
    }

    std::cout << "\nMatriz: \n";
    printMatrix(matrix);

    std::cout << "\nLa suma de filas es: \n";
    sumRows(matrix);

    std::cout << "\nLa suma de columnas es: \n";
    sumCols(matrix);

    std::cout << "\nLa suma de sus diagonales es: \n";
    sumDiagonal(matrix);

}
