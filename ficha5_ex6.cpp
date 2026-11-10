#include <iostream>
using namespace std;
#define N 10

int main() {
    int arrayNum[N] = {10, 8, -5, 6, 12, 4, -7, 14, 3, -3};
    int tamanhoArray = 10;
    int aux;

    cout << "Dezorganizado(original): ";

    for (int i = 0; i < tamanhoArray; i++) {
        //cout << arrayNum[i] << " ";
        cout << "\n #" << (i+1) << " = " << arrayNum[i];
    }

    cout << endl;

    cout << "\nOrganizado(crescente): ";
    for (int i  = 0; i < N - 1; i++) {
        for (int t = (i + 1); t < tamanhoArray; t++) {
            if (arrayNum[i] > arrayNum[t]) {
                aux = arrayNum[t];
                arrayNum[t] = arrayNum[i];
                arrayNum[i] = aux;
            }
        }
    }

    for (int i = 0; i < tamanhoArray; i++) {
        cout << "\n #" << (i+1) << " = " << arrayNum[i];
    }

    return 0;
}

