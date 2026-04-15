#pragma once
#ifndef DOMES.H
#define DOMES.H
#include <string>

namespace EIF201 {
	class Domes
	{
	private:

		int id;
		std::string typeDome;
		double capacityOxygen;
		int colonistShelter;

	public:
		Domes(int id, std::string typeDome, double capacityOxygen, int colonistShetter);
		~Domes();

		std::string getTypeDome() const;
		int getId() const;
		double getCapacityOxygen() const;
		int getColonistShelter() const;

		void setTypeDome(std::string typeDome);
		void setId(int id);
		void setCapacityOxygen(double capacityOxygen);

		void emergencySealDome(int id);
	};
}
#endif