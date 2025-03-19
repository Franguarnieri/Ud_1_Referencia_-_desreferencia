#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int* p = arr; // p apunta al primer elemento

    cout << "Primer elemento: " << *p << endl;
    cout << "Segundo elemento: " << *(p + 1) << endl;
    cout << "Tercer elemento: " << *(p + 2) << endl;

    return 0;
}