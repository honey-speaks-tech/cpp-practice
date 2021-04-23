#pragma once
#include <string>

class Resource
{
    private:
    std::string name;

    public:
    Resource(std::string local_name);
    ~Resource();
    std::string GetName() const { return name; }
};