#include <iostream>
using namespace std;

void porValor(int n) {
    n = 50; // No afecta la variable original
}

void porReferencia(int &n) {
    n = 50; // Modifica la variable original
}

int main() {
    int num = 10;

    porValor(num);
    cout << "Después de porValor: " << num << endl;  // Sigue siendo 10

    porReferencia(num);
    cout << "Después de porReferencia: " << num << endl;  // Ahora es 50

    return 0;
}