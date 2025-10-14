#include <iostream>

int main()
{
    int numbers[5] = {1, 2, 5, 3, 4};
    int maior = numbers[0];
    
    for (int i=1; i<5; i++) {
        if (numbers[i] > maior) {
            maior = numbers[i];
        }
    }
    std::cout << maior;

    return 0;
}