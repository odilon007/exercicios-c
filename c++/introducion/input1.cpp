#include <iostream>

int main()
{
    int age;
    double salary;
    char alphabet;
    std::cout<< "Enter a number: ";
    std::cin >> age;
    std::cout << "Enter a number: ";
    std::cin >> salary;
    std::cout << "Enter a character: ";
    std::cin >> alphabet;
    std::cout<< "Integer Input: " << age << std::endl;
    std::cout << "Double Input: " << salary << std::endl;
    std::cout << "Character Input: " << alphabet;
    
 
    return 0;
}