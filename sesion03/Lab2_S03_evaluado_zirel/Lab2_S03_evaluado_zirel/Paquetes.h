#ifndef PAQUETES_H
#define PAQUETES_H

double* createRecord(int& amount);
void getWeights(double* weights, int amount);
double calcTotalWeights(const double* weights, int amount);
int countOverLimit(const double* weights, int amount, double limit);
const double* searchHevier(const double* weights, int amount);







#endif 
