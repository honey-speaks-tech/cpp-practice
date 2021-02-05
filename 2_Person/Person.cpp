//Person class implementation

#include "Person.h"

std::string Person::getName()
{
    std::cout<<"First name: " << first_name << " Last name: " << last_name << std::endl;
    return first_name + " " + last_name;

}