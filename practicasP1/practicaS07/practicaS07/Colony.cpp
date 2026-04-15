#include "Colony.h"

namespace EIF201{
	Colony::Colony(std::string _name, std::string planetLocation, int domeCount)
	{
		this->name = _name;
		this->planetLocation = planetLocation;
		this->domeCount = 0;

	}
	Colony::~Colony()
	{
		for (int i = 0; i < domeCount; i++) {
			delete dome[i];
			dome[i] = nullptr;
		}
		delete[] dome;
		dome = nullptr;
	}

	void Colony::setName(std::string newName) 
	{
		this->name = newName;
	}

	void Colony::setPlanetLocation(std::string location) 
	{
		this->planetLocation = location;
	}

	std::string Colony::getName() const { return name; }

	std::string Colony::getPlanetLocation() const { return planetLocation; }

	Domes* Colony::getDome(int index) const{ 
		if (index < 0 || index >= domeCount) {
			return nullptr;
		}

		return dome[index];
	}

	int Colony::getDomeCount() const{ return domeCount; }

	void Colony::createDome(std::string typeDome, double capacityOxygen, int colonistShelter)
	{
		int newDomeId = domeCount + 1;
		dome[domeCount] = new Domes[newDomeId, typeDome, capacityOxygen, colonistShelter];

		domeCount++;

		std::cout << "Se creo el domo " << newDomeId << " del tipo " << typeDome << std::endl;
	}
	

	bool Colony::deleteDome(int index)
	{
		if (index < 0 || index >= domeCount) {
			return false;
		}

		delete dome[index];

		for (int i = index; i < domeCount - 1; i++) {
			dome[i] = dome[i + 1];
		}
		dome[domeCount - 1] = nullptr;
		domeCount--;

		return true;
	}
}