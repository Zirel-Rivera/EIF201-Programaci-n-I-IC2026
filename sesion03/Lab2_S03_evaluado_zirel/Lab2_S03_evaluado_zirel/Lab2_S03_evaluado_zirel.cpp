#include <iostream>
#include "Paquetes.h"

int main()
{
    int amount = 0;
    double* weights = createRecord(amount);
    getWeights(weights, amount);

    double totalWeights = calcTotalWeights(weights, amount);
    double average = totalWeights / amount;
    std::cout << "Resultados\n";
    std::cout << "El peso total: " << totalWeights << "kg\n";
    std::cout << "El promedio total: " << average << "kg\n";

    double limit = 0.0;
    std::cout << "Ingrese el limite de peso en kg\n";
    std::cin >> limit;
    
    int overLimit = countOverLimit(weights, amount, limit);
    std::cout << "Los paquetes que superar el peso limite  (" << limit << " kg) : " << overLimit << "\n";

    const double* heavier = searchHevier(weights, amount);
    int index = (int)(heavier - weights);
    std::cout << "Paquete mas pesado " << (index + 1) << " con " << *heavier << " kg \n";

    delete[]weights;
    weights = nullptr;

    return 0;

}
