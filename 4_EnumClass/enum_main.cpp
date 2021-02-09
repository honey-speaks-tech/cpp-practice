//Main 

#include <iostream>
#include "status.h"

int main()
{
    Status s = PENDING;
    s = PROGRESS;
    std::cout << "Status: " << s << std::endl;

    FileStatus fileStatus = FileStatus::ERROR;
    fileStatus = FileStatus::OK;
    std::cout << "File Status: " << static_cast<int>(fileStatus) << std::endl;

    NetworkStatus networkStatus = NetworkStatus::ERROR;
    networkStatus = NetworkStatus::OK;
    std::cout << "Network Status: " << static_cast<int>(networkStatus) << std::endl;
    return 0;

}