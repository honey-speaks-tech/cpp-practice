#include "Person.h"

int main()
{
    Person Honey("Honey", "Sukesan", 34);
    Honey.AddResource();
    std::string s1 = Honey.getResourceName();
    std::cout << s1 << std::endl;
    Honey.AddResource();
    Person Honey1 = Honey;
    std::string s2 = Honey1.getResourceName();
    std::cout << s2 << std::endl;
    Honey1.AddResource();
    return 0;
}