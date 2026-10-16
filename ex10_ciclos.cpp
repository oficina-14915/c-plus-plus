#include <iostream>
using namespace std;

int main () {

    float resultado = 0;
    int i;

    for (int i=1; i<=10;i++) {
        resultado += i;

    }
    i  = 11;
    do{
        resultado -= i;
        i++;
    } while (i<=15);

    while (i<=20) {

        if (((i/2)*2) == i) {
            resultado /= i;
        } else {
            resultado *=i;
        }

        i++;

    }

    cout << resultado;

    return 0;

}

