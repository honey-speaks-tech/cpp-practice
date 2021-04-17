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

    Accum<Person> people(0);
    //Accum people(0);
    Person p1("Honey", "Sukesan", 34);
    Person p2("Sruthy", "Sukesan", 30);    
    people += p1;
    people += p2;
    std::cout << "Total of people: " << people.GetTotal() << std::endl;
}