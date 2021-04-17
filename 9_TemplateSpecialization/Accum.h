#include "Person.h"

template <class T>
class Accum
{
    private:
        T total;

    public:
        Accum(T start):total(start) {};
        
        T operator+=(T const& t)
        {
            return total += t;
        } 

        T GetTotal() const {return total;}

};

//Template specialization for Person object
template <>
class Accum<Person>
{
    private:
        int total;

    public:
        Accum(int start):total(start) {};
        
        int operator+=(Person const& t)
        {
            return total += t.getAge();
        } 

        int GetTotal() const {return total;}

};