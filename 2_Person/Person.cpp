//Person class implementation

#include "Person.h"

Person::Person() :
        age(18) 
{ 
    std::cout<<"Constructing first name: " << first_name << " Last name: " << last_name << " age: " << age << std::endl;
}

Person::Person(std::string first_name, 
               std::string last_name, 
               int age) : 
                first_name(first_name),
                last_name(last_name),
                age(age) 
{
    std::cout<<"Constructing first name: " << first_name << " Last name: " << last_name << " age: " << age << std::endl;
}

Person::~Person()
{
    std::cout<<"Destructing first name: " << first_name << " Last name: " << last_name << " age: " << age << std::endl;
}
std::string Person::getName()
{
    std::cout<<"First name: " << first_name << " Last name: " << last_name << std::endl;
    return first_name + " " + last_name;

}