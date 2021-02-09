#include <iostream>

struct Thing
{
    int status;

    Thing() = default;
    Thing(int s): status(s){}

    int getStatus()
    {
        return status;
    }
};

int main()
{
    int num{23};
    Thing thing(num);

    //Scoped switch - Compiles only in C++17
    switch(int sts = thing.getStatus(); int val = sts%2)
    {
        case 0:
            std::cout << "You entered an even number" << std::endl;
            break;

        default:
            std::cout << "You entered an odd number" << std::endl;
            break;

    }
    return 0;
}