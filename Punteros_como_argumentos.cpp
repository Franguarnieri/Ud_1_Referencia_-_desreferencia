#include <iostream>
using namespace std;

void modificar(int* p) {
    *p = 99; // Modifica el valor de la variable original
}

int main() {
    int num = 20;
    cout << "Antes de modificar: " << num << endl;

    modificar(&num);
    cout << "Después de modificar: " << num << endl;

    return 0;
}