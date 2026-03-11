#include "Paquetes.h"
#include <iostream>

double* createRecord(int& amount)
{
    do {
        std::cout << "Ingrese la cantidad de paquetes, debe ser mayor a 0\n";
        std::cin >> amount;
    } while (amount < 0);

    double* weights = new double[amount];

    return weights;
}

void getWeights(double* weights, int amount)
{
    for (int i = 0; i < amount; i++) {
        do {
            std::cout << "Ingrese el peso en kg" << (i + 1) << std::endl;
            std::cin >> weights[i];

        } while (weights[i] < 0);
    }
}

double calcTotalWeights(const double* weights, int amount)
{
    double totalWeights = 0.0;
    for (int i = 0; i < amount; i++) {
        totalWeights += weights[i];
    }
    return totalWeights;
}

int countOverLimit(const double* weights, int amount, double limit)
{
    int count = 0;
    for (int i = 0; i < amount; i++) {
        if (weights[i] > limit) {
            count++;
        }
    }
    return count;
}

const double* searchHevier(const double* weights, int amount)
{
    const double* hevier = &weights[0];
    for (int i = 0; i < amount; i++) {
        if (weights[i] > *hevier) {
            hevier = &weights[i];
        }
    }
    return hevier;
}
