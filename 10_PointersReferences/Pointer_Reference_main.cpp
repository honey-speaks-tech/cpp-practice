#include <iostream>
#include "Person.h"

int DoubleIt(const int& x)
{
    return x * 2;
}

int main()
{
    int c = 10;
    int* c_ptr = &c;
    *c_ptr = 20;
    (*c_ptr)++;

    const int ci = 200;
    //ci = 250;

    //int& nci = ci;

    std::cout << c << '\t' << *c_ptr << std::endl;

    int b = 10;
    int& rb = b;
    const int &crb = b;
    //crb = 30;

    rb = 20;
    std::cout << b << '\t' <<  rb << std::endl;

    int item = 100;
    int* ptr = nullptr;
    ptr = &item;

    if(ptr)
    {
        std::cout << *ptr << std::endl;
    }

    std::cout << DoubleIt(item) << std::endl;
    std::cout << DoubleIt(23) << std::endl;

    Person Honey("Honey", "Sukesan", 34);
    const Person cHoney = Honey;
    cHoney.getAge();
    //cHoney.setAge(35);

}