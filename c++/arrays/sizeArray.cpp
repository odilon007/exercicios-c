#include <iostream>

int main()
{
    int data[5], size;
    
    size = sizeof(data) / sizeof(data[0]);
    std::cout << "Array Size = " << size;
    
    return 0;
}