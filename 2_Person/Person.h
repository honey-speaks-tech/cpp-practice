//Person.h
#include <iostream>
#include <string>

class Person
{
    private:
    std::string first_name;
    std::string last_name;
    int age;

    public:
    std::string getName();
};