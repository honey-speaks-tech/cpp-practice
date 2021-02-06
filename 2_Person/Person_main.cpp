//Main 

#include "Person.h"

int main()
{
    Person p1("Honey", "Sukesan", 34);
    {
        Person p2;
        p2.getName();
    }

    p1.getName();
    return 0;

}