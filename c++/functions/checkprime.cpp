#include <iostream>
#include <cmath>


int primo(int n) {
    if (n == 0 || n == 1) {
        return 0;
    }
    for (int i=2; i<n; ++i) {
        if (n%i== 0) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    std::cout << "digite um numero: ";
    std::cin >> num;
    if (primo(num) == 1) {
        std::cout << "eh primo";
    } else {
        std::cout << "nao eh primo";
    }

    return 0;
}