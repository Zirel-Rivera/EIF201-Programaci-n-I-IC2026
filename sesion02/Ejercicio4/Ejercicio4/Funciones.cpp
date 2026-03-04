#include "Funciones.h"
#include <string>

std::string firstName(std::string name)
{
    int pos = name.find(' ');
    return name.substr(0, pos);

}

std::string firstLastName(std::string name)
{
    int pos = name.find(' ');
    int pos1 = name.find(' ', pos + 1);
    return name.substr(pos + 1, pos1 - pos - 1);
}

int countVowels(std::string name)
{
    int count = 0;
    for (size_t i = 0; i < name.length(); i++) {
        char v = name[i];
        if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' ||
            v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U') {

          count++;
        }
           
    }
    return count;
}

std::string nameToupper(std::string& name)
{
    for (size_t i = 0; i < name.length(); i++) {
        name[i] = toupper(name[i]);
    }

    return name;
}

int lengthName(std::string name)
{
    return name.length();
}
