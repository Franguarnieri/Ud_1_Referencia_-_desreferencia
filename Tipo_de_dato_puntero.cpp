#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;  // ptr almacena la dirección de x

    cout << "Valor de x: " << x << endl;
    cout << "Dirección de x: " << &x << endl;
    cout << "Valor de ptr: " << ptr << endl;  // Dirección de x
    cout << "Valor al que apunta ptr: " << *ptr << endl; // Desreferenciación

    return 0;
}