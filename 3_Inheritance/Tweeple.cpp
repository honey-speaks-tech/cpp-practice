#include "Tweeple.h"

Tweeple::Tweeple(std::string first_name, std::string last_name, int age, std::string handle) :
                Person(first_name, last_name, age),
                twitter_handle(handle) 
{
    std::cout<<"Constructing twitter_handle " << twitter_handle << std::endl;
}

Tweeple::~Tweeple()
{
    std::cout<<"Destructing twitter_handle " << twitter_handle << std::endl;
}