#pragma once
#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <array>

const int elements = 20;

void invertedArray(const std::array<int, elements>& original, std::array<int, elements>& inverted, int nElement);
void originalElements(const std::array<int, elements>& original, int nElements);

#endif


