#include "Resource.h"
#include <iostream>

Resource::Resource(std::string local_name) : name(local_name)
{
    std::cout<<"Constructing " << name << std::endl;
} 

Resource::~Resource()
{
    std::cout<<"Destructing " << name << std::endl;
} 