#include <iostream>
#include <array>
#include "Funciones.h"

int main()
{
    const int elements = 20;
    int nElement;
    std::array<int, elements> original;
    std::array<int, elements> inverted;


    std::cout << "Ingrese cuantos elementos son, maximo 20\n";
    std::cin >> nElement;
    for (size_t i = 0; i < nElement; i++) {

        std::cout << "Elemento: ";
        std::cin >> original[i];
    }

    originalElements(original, nElement);
    invertedArray(original, inverted, nElement);



    return 0;
}
