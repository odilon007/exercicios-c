#include <iostream>
#include <cmath>

using namespace std;

int primo(int n) {
    if (n <= 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    int limite = sqrt(n);
    for (int i=3; i<=limite; i += 2) {
        if (n%i== 0) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    cout << "digite um numero: ";
    cin >> num;
    if (primo(num)) {
        cout << "eh primo";
    } else {
        cout << "nao eh primo";
    }

    return 0;
}