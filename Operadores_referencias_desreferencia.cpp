#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* p = &x;  // p apunta a la dirección de x

    cout << "Dirección de x (&x): " << &x << endl;
    cout << "Valor de p (direccion de x): " << p << endl;
    cout << "Valor de *p (desreferenciado): " << *p << endl;

    *p = 100; // Modificamos el valor de x a través del puntero
    cout << "Nuevo valor de x: " << x << endl;

    return 0;
}