#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* p = arr;

    cout << "Elementos del array usando aritmética de punteros:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Dirección: " << (p + i) << " - Valor: " << *(p + i) << endl;
    }

    return 0;
}