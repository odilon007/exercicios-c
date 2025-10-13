#include <iostream>

using namespace std;

int sumArray(int n[]) {
    int sum = 0;
    for (int i=0; i<5; i++) {
        sum += n[i];
    }
    return sum;
}
int main()
{
    int data[5] = {19, 10, 13, 15, 6};
    data[2] = 3;
    data[4] = 100;
    cout << "soma do array: " << sumArray(data) << endl;
    for (int i=0; i<5; ++i) {
        cout <<data[i] << endl;
    }
    int dados[3];
    cout << "Digite 3 numeros: ";
    for (int i=0; i<3; ++i) {
        cin >> data[i];
    }
    cout << "Array elements are: ";
    for (int i=0; i<3; i++) {
        cout << data[i] << " ";
    }
    return 0;
}
