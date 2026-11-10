#include <iostream>

using namespace std;

int main() {
    int n = 10;
    int num[n], soma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Diz 10 numeros para somar os quadrados(um por vez): ";
        cin >> num[n];
        //cout << num[n] << endl;

        soma = soma + num[n] * num[n];

    }

    cout << soma;

    return 0;
}

/*
#include <iostream>

using namespace std;

#define N 10

int main() {
    int arrayNums[N];
    int soma = 0;

    for (int i = 0; i < N; i++) {
        cout << "\nDiga o num #" << i+1 << ": ";
        cin >> arrayNums[i];
    }

    cout << "\n\nA conta: 0";

    for (int i = 0; i < N; i++) {
        soma += arrayNums[i] * arrayNums[i];
        cout << " + (" << arrayNums[i]
        cout << " x " << arrayNums[i] << ")";
    }

    cout << "\n\nO resultado final = " << soma;

    return 0;
}
