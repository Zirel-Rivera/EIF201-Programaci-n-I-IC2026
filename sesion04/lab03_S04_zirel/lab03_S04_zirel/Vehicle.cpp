#include "Vehicle.h"
#include <iostream>

namespace UNA {
	UNA::Vehicle::Vehicle(std::string plate, std::string brand, int year,
		double kilometers, bool isActive)
	{
		this->plate = plate;
		this->brand = brand;
		this->year = year;
		this->year = year;
		this->kilometers = kilometers;
		this->isActive= true;
	}

	std::string UNA::Vehicle::getPlate() const
	{
		return std::string();
	}

	std::string Vehicle::getPlate() const
	{
		return std::string();
	}

	std::string UNA::Vehicle::getBrand() const
	{
		return std::string();
	}

	int UNA::Vehicle::getYear() const
	{
		return 0;
	}

	double UNA::Vehicle::getKilometers() const
	{
		return 0.0;
	}

	bool UNA::Vehicle::getIsActive()
	{
		return false;
	}

	void UNA::Vehicle::registerKm(double km)
	{
		if (!isActive) {
			std::cout << "Error, servicio inactivo de la placa: " << plate << std::endl;
		}
		if (km <= 0) {
			std::cout << "El kilometraje es negativo\n";
			return;
		}
		kilometers += km;
		std::cout << " Nuevo km: " << km << " más el kilometraje total, suma =  "
			<< kilometers << std::endl;

	}

	void UNA::Vehicle::desactive()
	{
		if (!isActive) {

			std::cout << "No se puede desactivar, se encuentra inactivo\n";
			return;
		}
		isActive = false;

		std::cout << "Se desactivo el vehiculo: " << plate << std::endl;

	}

	void UNA::Vehicle::reactive()
	{
		if (isActive) {
			
			std::cout << "El vehiculo esta activo\n";
			return;
		}
		isActive = true;

		std::cout << "Se activo el vehiculo: " << plate << std::endl;
	}

	void UNA::Vehicle::show() const
	{
		std::cout << "------------INFORMACION------------\n";
		std::cout << "Placa:	   " << plate << std::endl;
		std::cout << "Marca:       " << brand << std::endl;
		std::cout << "Año:         " << year << std::endl;
		std::cout << "Kilometraje: " << kilometers << "km" << std::endl;
		std::cout << "Estado:      " << isActive << std::endl;

	}

}