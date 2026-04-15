#pragma once
#ifndef CONOLY_H
#define COLONT_H
#include <string>
#include <iostream>
#include "Domes.h"

namespace EIF201 {


class Colony
{
private:

	std::string name;
	std::string planetLocation;
	Domes** dome;
	int domeCount;

public:
	Colony(std::string name, std::string planetLocation, int domeCount);
	~Colony();
	
	void setName(std::string newName);
	void setPlanetLocation(std::string location);

	std::string getName() const;
	std::string getPlanetLocation() const;
	Domes* getDome(int index) const;
	int getDomeCount() const;

	void createDome(std::string typeDome, double capacityOxygen, int colonistShelter);
	bool deleteDome(int index);
};

}

#endif