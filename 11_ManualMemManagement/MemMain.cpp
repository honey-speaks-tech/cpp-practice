#include "Person.h"

int main()
{
    Person Honey("Honey", "Sukesan", 34);
    Honey.AddResource();
    Honey.AddResource();
    // Without copy assignment operator, this will give you core dump
    Person Honey1 = Honey;
    return 0;
}