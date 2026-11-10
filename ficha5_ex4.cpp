#include <iostream>
using namespace std;
#define N 10

int main() {
    int arrayNum[N] = {1, 12, 5, 6, 2, 13, 7, 4, 0, 3};
    int tamanhoArray = 10;
    int aux;

    cout << "Dezorganizado(original): ";

    for (int i = 0; i < tamanhoArray; i++) {
        //cout << arrayNum[i] << " ";
        cout << "\n #" << (i+1) << " = " << arrayNum[i];
    }

    cout << endl;

    cout << "\nOrganizado(decrescente): ";
    for (int i  = 0; i < N - 1; i++) {
        for (int t = (i + 1); t < tamanhoArray; t++) {
            if (arrayNum[i] < arrayNum[t]) {
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



/*
#include <iostream>
using namespace std;

int main() {
    int arrayNum[] = {0, 12, 5, 6, 2, 11, 7, 4, 0, 3};
    int tamanhoArray = 10;
    int aux;

    cout << "Dezorganizado(original): ";

    for (int i = 0; i < tamanhoArray; i++) {
        cout << arrayNum[i] << " ";
        //cout << "\n #" << (i+1) << " = " << arrayNum[i];
    }

    cout << endl;

    cout << "\nOrganizado(decrescente): ";
    for (int i = 0; i < tamanhoArray; i++) {
        for (int t  = 0; t < tamanhoArray; t++) {
            if (arrayNum[t] < arrayNum[t+1]) {
            aux = arrayNum[t];
            arrayNum[t] = arrayNum[t+1];
            arrayNum[t+1] = aux;
            }
        }
    }

    for (int i = 0; i < tamanhoArray; i++) {
        cout << arrayNum[i] << " ";
    }

    return 0;
}
*/


