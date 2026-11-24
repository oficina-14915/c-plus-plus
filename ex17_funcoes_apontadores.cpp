#include <iostream>
#include <stdio.h>
using namespace std;

void mostraMsg();
void trocaNumeros(int &x, int &y);

int main() {
    int a = 5, b = 3;

    mostraMsg();
    trocaNumeros(a, b);

    cout << "\nA: " << a << " // B: " << b;
    return 0;
}

void mostraMsg() {
    cout << "Estou a mostrar a funcao mostraMsg\n";
}

void trocaNumeros(int &x, int &y) {
    int aux = x;
    x = y;
    y = aux;
}


