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

std::string Person::getName() const
{
    return first_name + " " + last_name;

}

bool Person::operator<(Person const& p) const
{
    return age < p.age;
    
}

bool Person::operator<(int n) const
{
    return age < n;
    
}

void Person::AddResource()
{
    pResource.reset();
    pResource = std::make_shared<Resource>("Resource for " + getName());
}

bool operator<(int n, Person const& p)
{
    return n < p.id;
    
}