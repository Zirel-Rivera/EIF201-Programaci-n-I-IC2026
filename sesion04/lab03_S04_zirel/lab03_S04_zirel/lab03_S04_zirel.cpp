#include <iostream>
#include <limits>
#include <string>
#include "Vehicle.h"
#include "Fleet.h"

using namespace UNA;

void clearBuffer() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void showMenu() {
    std::cout << "||-------------------------------------||\n";
    std::cout << "||        - Menu Principal -           ||\n";
    std::cout << "||                                     ||\n";
    std::cout << "||1. Registrar vehiculo                ||\n";
    std::cout << "||2. Buscar vehiculo por placa         ||\n";
    std::cout << "||3. Mostrar vehiculo por marca        ||\n";
    std::cout << "||4. Regristrar kilometros             ||\n";
    std::cout << "||5. Desactivar Vehiculo               ||\n";
    std::cout << "||6. Reactivar vehiculo                ||\n";
    std::cout << "||7. Eliminar vehiculo                 ||\n";
    std::cout << "||8. Mostrar flota completa            ||\n";
    std::cout << "||9. Cantidad de vehiculos activos     ||\n";
    std::cout << "||10.Salir                             ||\n";
    std::cout << "||-------------------------------------||\n";
    std::cout << "  Seleccione una opcion: ";
}
int main() {

    Fleet fleet;
    int option;

    do {
        showMenu();
        std::cin >> option;
        clearBuffer();

        switch (option){
        case 1: {
            std::string plate, brand;
            int year;
            double km;

            std::cout << "Placa: ";
            std::getline(std::cin, plate);
            std::cout << "Marca: ";
            std::getline(std::cin, brand);
            std::cout << "Anio: ";
            std::cin >> year;
            clearBuffer();
            std::cout << "Kilometraje: ";
            std::cin >> km;
            clearBuffer();
            fleet.registerVehicle(new Vehicle(plate, brand, year, km, true));
            clearBuffer();
            break;
        }
        case 2: {
            std::string plate;
            std::cout << "Placa: ";
            std::getline(std::cin, plate);
            Vehicle* v = fleet.searchPlate(plate);
            if (v) {
                v->show();
            }
            else {
                std::cout << "No encontrado\n";
            }
            break;
        }
        case 3: {
            std::string brand;
            std::cout << "Brand: ";
            std::getline(std::cin, brand);
            fleet.showBrand(brand);
            break;
        }
        case 4: {
            std::string plate;
            double km;
            std::cout << "Placa: ";
            std::getline(std::cin, plate);
            Vehicle* v = fleet.searchPlate(plate);
            if (v) {
                std::cout << "Kilometraje añadido: ";
                std::cin >> km;
                clearBuffer();
                v->registerKm(km);
            }
            else {
                std::cout << "No encontrado\n";
            }
            break;
        }
        case 5: {
            std::string plate;
            std::cout << "Placa: ";
            std::getline(std::cin, plate);
            Vehicle* v = fleet.searchPlate(plate);
            if (v) {
                v->desactive();
            }
            else {
                std::cout << "No encontrado\n";
            }
            break;
        }
        case 6: {
            std::string plate;
            std::cout << "Placa: ";
            std::getline(std::cin, plate);
            Vehicle* v = fleet.searchPlate(plate);
            if (v) {
                v->reactive();
            }
            else {
                std::cout << "No encontrado\n";
            }
            break;
        }
        case 7: {
            std::string plate;
            std::cout << "Placa: ";
            std::getline(std::cin, plate);
            fleet.eliminate(plate);
            break;
        }
        case 8: {
            fleet.showAll();
            break;
        }
        case 9: {
            std::cout << "Vehiculos activos: " << fleet.countActive() << std::endl;
            break;
        }
        case 10: {

            std::cout<<"Salida";
            break;
        }
        default: {
            std::cout << "Opcion invalida\n";
            break;
        }

        }
    }while (option != 10);

    return 0;
}
