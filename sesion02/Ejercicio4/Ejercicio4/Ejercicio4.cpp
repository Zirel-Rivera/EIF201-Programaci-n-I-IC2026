#include <iostream>
#include <string>
#include "Funciones.h"

int main()
{
   std::string name;

   std::cout << "Ingrese su nombre completo\n";
   std::getline(std::cin, name);

   std::cout << "\nPrimer nombre: " << firstName(name) << std::endl;
   std::cout << "Primer apellido: " << firstLastName(name) << std::endl;
   std::cout << "Hay: " << countVowels(name) <<" vocales"<< std::endl;
   std::cout << "Nombre en toupper: " << nameToupper << std::endl;
   std::cout << "La longitud del nombre es: " << lengthName << std::endl;
}
