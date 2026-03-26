#include "Fleet.h"
#include <iostream>


UNA::Fleet::Fleet(int capacity)
{
	this->capacity = capacity;
	this->amount = 0;
	this->vehicles = new Vehicle * [this->capacity];
}

UNA::Fleet::~Fleet()
{
	for (int i = 0; i < amount; i++) {
		delete vehicles[i];
	}
	delete[] vehicles;
}

void UNA::Fleet::registerVehicle(Vehicle* newVehicle)
{
	if (amount == capacity) {
		capacity = capacity * 2;
		Vehicle** temp = new Vehicle * [capacity];
		for (int i = 0; i < amount; i++) {
			temp[i] = vehicles[i];
		}
		delete[] vehicles;
		vehicles = temp;
		std::cout << "La capacidad es: " << capacity << std::endl;
	}
	vehicles[amount] = newVehicle;
	amount++;

	std::cout << "Agregado a la flota vehiculo: " << newVehicle->getPlate() << std::endl;
}

UNA::Vehicle* UNA::Fleet::searchPlate(std::string plate)
{
	for (int i = 0; i < amount; i++) {
		if (vehicles[i]->getPlate() == plate) {
			return vehicles[i];
		}
	}

	return  nullptr;
}

void UNA::Fleet::showBrand(std::string brand)
{
	int count = 0;
	for (int i = 0; i < amount; i++) {
		if (vehicles[i]->getBrand() == brand) {
			vehicles[i]->show();
			count++;
		}
	}
	if (count == 0) {
		std::cout << "No hay vehiculos marca: " << brand << std::endl;
	}
	else {
		std::cout << "Total de la marca: " << brand << ": " << count << std::endl;
	}

}	

bool UNA::Fleet::eliminate(std::string plate)
{
	for (int i = 0; i < amount; i++) {
		if (vehicles[i]->getPlate() == plate) {
			if (vehicles[i]->getIsActive()) {
				std::cout << "Hay que desactivar: " << plate << std::endl;
				return false;
			}

			delete[] vehicles[i];
			for (int j = i; j < amount -1; j ++) {
				vehicles[j] = vehicles[j + 1];
			}
			amount--;
			std::cout << " Se elimino vehiculo: " << plate<<std::endl;
			return true;
		}
	}
	return false;
}

int UNA::Fleet::countActive()
{
	int count = 0;
	for (int i = 0; i < amount; i++) {
		if (vehicles[i]->getIsActive()) {
			count++;
		}
	}

	return count;
}

void UNA::Fleet::showAll()
{
	if (amount == 0) {
		std::cout << "Flota vacia" << std::endl;

		return;
	}
	std::cout << "--Flota: " << amount << "Vehiculos--" << std::endl;
	for (int i = 0; i < amount; i++) {
		vehicles[i]->show();
	}
}
