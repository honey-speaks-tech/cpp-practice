#include "Accum.h"
#include<iostream>

int main()
{
    //Accum<int> integers(0);
    Accum integers(0); //Template type deduction
    integers += 10;
    integers += 12;
    std::cout << "Total of integers: " << integers.GetTotal() << std::endl;

    //Accum<std::string> strings("");
    Accum strings(std::string(""));
    strings += "Hello ";
    strings += "Krishna";
    std::cout << "Total of strings: " << strings.GetTotal() << std::endl;

    //integers += "Om";
    //strings += 35;
}