#include "Funciones.h"
#include <iostream>


void originalElements(const std::array<int, elements>& original, int nElements) {

    std::cout << "Elementos originales: " << std::endl;
	for (size_t i = 0; i < nElements; i++) {

		std::cout << original[i]<< std::endl;

	}
}

void invertedArray(const std::array<int, elements>& original,
	std::array<int, elements>& inverted, int nElement) {

	std::cout << "Elementos invertidos: " << std::endl;
	for (size_t i = 0; i < nElement; i++) {
		inverted[i] = original[nElement - 1 - i];

		std::cout << inverted[i] << std::endl;

	}
}

