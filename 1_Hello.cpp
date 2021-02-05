// Hello.cpp
#include <iostream>
#include <string>

int main()
{

    std::cout << "Type your name:" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello" << name <<"!" << std::endl;
    return 0;
}