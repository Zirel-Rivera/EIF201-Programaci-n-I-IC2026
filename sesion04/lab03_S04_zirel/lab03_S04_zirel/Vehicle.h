#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

namespace UNA {

	class Vehicle
	{
	private:
		std::string plate;
		std::string brand;
		int year;
		double kilometers;
		bool isActive;

	public:
		Vehicle(std::string plate, std:: string brand, 
			int year, double kilometers, bool isActive);

		std::string getPlate() const;
		std::string getBrand() const;
		int getYear() const;
		double getKilometers() const;
		bool getIsActive();

		void registerKm(double km);
		void desactive();
		void reactive();
		void show() const;

	};


}
#endif 