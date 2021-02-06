//Main 
#include "Person.h"
#include "Tweeple.h"

int main()
{
    Tweeple t1("Honey", "Sukesan", 34, "@hsukesan");
    Person p1("Nihar", "Sambhu Dayal", 10);
    {
        Person p2;
        p2.getName();
    }
    
    p1.getName();
    return 0;

}