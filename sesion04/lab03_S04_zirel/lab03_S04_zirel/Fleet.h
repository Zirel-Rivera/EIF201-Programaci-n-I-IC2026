#pragma once
#ifndef FLEET_H
#define FLEET_H
#include "Vehicle.h"
#include <iostream>

namespace	UNA {
	class Fleet
	{
	private:

		int capacity;
		int amount;

		Vehicle** vehicles;

	public:

		 Fleet(int capacity = 3);
		 ~Fleet();

		 void registerVehicle(Vehicle* newVehicle);
		 Vehicle* searchPlate(std::string plate);
		 void showBrand(std::string brand);
		 bool eliminate(std::string plate);
		 int countActive();
		 void showAll();






	};

}
#endif
