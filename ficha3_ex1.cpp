#include <iostream>

using namespace std;

int somanum(int numero) {
    if (numero == 0) {
        return 0;
    } else {
        if (numero > 0) {
        return numero + somanum(numero-1);
    } else {
        return numero + somanum(numero+1);
    }


    }
}

int main () {
    int n;

    cout << "Diz um numero: ";
    cin >> n;

    cout << somanum(n);


    return 0;
}
