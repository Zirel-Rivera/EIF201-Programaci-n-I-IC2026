#include "Colony.h"

namespace EIF201{
	Colony::Colony(std::string _name, std::string planetLocation, int dome)
	{
		this->name = _name;
		this->planetLocation = planetLocation;
		this->dome = dome;
	}
	Colony::~Colony()
	{
	}

	void Colony::setName(std::string newName) 
	{
		this->name = newName;
	}

	void Colony::setPlanetLocation(std::string location) 
	{
		this->planetLocation = location;
	}

	void Colony::setDome(int newDome) 
	{
		this->dome = dome;
	}
	
	std::string Colony::getName() const { return name; }

	std::string Colony::getPlanetLocation() const { return planetLocation; }

	int Colony::getDome() const { return dome; }

	void Colony::createDome(int newDome)
	{
		   
	}

	bool Colony::deleteDome(int newDome)
	{
		return false;
	}
}