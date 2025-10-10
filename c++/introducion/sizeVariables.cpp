#include <iostream>

using namespace std;

int main()
{
    char char_type;
    int int_type;
    float float_type;
    double double_type;

    // sizeof gives the size in bytes
    
    cout << "char: " << sizeof(char_type) << endl;
    cout << "int: " << sizeof(int_type) << endl;
    cout << "float: " << sizeof(float_type) << endl;
    cout << "double: " << sizeof(double_type) << endl;

    return 0;
}
