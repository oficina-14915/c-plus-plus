#include <iostream>
using namespace std;

int main () {

/*
    quero imprimir o "a" 2x
    quero imprimir o "b" 2x
    quero imprimir o "c" 2x
    para ficar assim na apresentacao ao user: "abccba"
*/

    int na, nb, nc;
    string la, lb, lc;

    na = 2;
    nb = 4;
    nc = 6;

    la = "a";
    lb = "b";
    lc = "c";

    for (int i = 1; i <= (na/2); i++) {
        cout << la;

    }

    for (int i = 1; i <= (nb/2); i++) {
        cout << lb;

    }

    for (int i = 1; i <= (nc/2); i++) {
        cout << lc;

    }

    for (int i = (nc/2); i < nc; i++) {
        cout << lc;

    }

    for (int i = (nb/2); i < nb; i++) {
        cout << lb;

    }

    for (int i = (na/2); i < na; i++) {
        cout << la;

    }

    return 0;

}
