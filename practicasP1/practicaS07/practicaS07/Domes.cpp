#include "Domes.h"
#include <iostream>

namespace EIF201 {

	Domes::Domes(int id, std::string typeDome, double capacityOxygen, int colonistShelter) 
		: id(id), typeDome(typeDome), capacityOxygen(capacityOxygen), 
		colonistShelter(colonistShelter) {}

	Domes::~Domes()
	{}

	std::string Domes::getTypeDome() const {
		return typeDome;
	}
	int Domes::getId() const {
		return id;
	}
	int Domes::getColonistShelter() const{
		return colonistShelter;
	}
	double Domes::getCapacityOxygen() const{
		return capacityOxygen;
	}

	void setTypeDome(std::string typeDome) {
		
	}

	void setId(int id) {

	}

	void setCapacityOxygen(double capacityOxygen) {

	}

	void emergencySealDome(int id) {

	}
}