#pragma once
#ifndef CONOLY_H
#define COLONT_H
#include <string>

namespace EIF201 {


class Colony
{
private:

	std::string name;
	std::string planetLocation;
	int dome;

public:
	Colony(std::string name, std::string planetLocation, int dome);
	~Colony();
	
	void setName(std::string newName);
	void setPlanetLocation(std::string location);
	void setDome(int newDome);

	std::string getName() const;
	std::string getPlanetLocation() const;
	int getDome() const;

	void createDome(int newDome);
	bool deleteDome(int newDome);
};

}

#endif