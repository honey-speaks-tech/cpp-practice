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
    Person();
    ~Person();
    Person(std::string, std::string, int);
    std::string getName();
};