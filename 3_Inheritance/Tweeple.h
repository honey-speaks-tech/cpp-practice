#include "Person.h"

#include <iostream>
#include <string>

class Tweeple : public Person
{
    private:
    std::string twitter_handle;

    public:
    Tweeple() = default;
    Tweeple(std::string, std::string, int, std::string);
    ~Tweeple();
};