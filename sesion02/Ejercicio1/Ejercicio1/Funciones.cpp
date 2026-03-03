#include "Funciones.h"

int higherValue(std::array<int, 10> num) {

	int mayor = num[0];
	for (int i = 0; i < num.size(); i++) {
		if (mayor < num[i]) {
			mayor = num[i];
		}

	}
	return mayor;

}

int minorValue(std::array<int, 10> num){

	int minor = num[0];
	for (int i = 0; i < num.size(); i++) {
		if (minor > num[i]) {
			minor = num[i];
		}

	}
	return minor;
}

int sumNums(std::array<int, 10>num) {
	int sum = 0;

	for (int i = 0; i < num.size(); i++) {
		sum += num[i];
		
	}
	return sum;

}
double averageNums(std::array<int, 10>num) {
	double sum = 0;
	double average = 0;

	sum = sumNums(num);

	average = sum / 10;

	return average;
}