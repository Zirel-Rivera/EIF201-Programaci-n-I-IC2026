#include <iostream>
#include <array>
#include "Funciones.h"

int main()
{
	std::array<int,10> num;

	for (size_t i = 0; i < num.size(); i++) {
		std::cout << "Ingrese 10 numeros enteros, porfavor \n";
		std::cin >> num[i];
	}

	std::cout << "El numero mayor es: " << higherValue(num) << std:: endl;
	std::cout << "El numero menor es: " << minorValue(num) << std::endl;
	std::cout << "La suma de los numeros es: " << sumNums(num) << std::endl;
	std::cout << "El promedio de los numeros es: " << averageNums(num) << std::endl;

	return 0;
}

