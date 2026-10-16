#include <iostream>
using namespace std;

int main () {
    int x,y;
    float z, multDobroMetade, somaTriplo, terceiroElevado;
/*
A. a multiplicação do dobro do segundo com metade do primeiro. (Ex: (6*2) * (3/2)) ::: (y*2) * (x/2)

B. a soma do triplo do terceiro com o primeiro. (3*z + x)

C. o terceiro elevado ao cubo. (z^3)
*/

    cout << "Diz um numero inteiro: ";
    cin >> x;
    cout << "Diz um segundo numero inteiro: ";
    cin >> y;
    cout << "Diz um numero real: ";
    cin >> z;

    multDobroMetade = (y*2) * (x/2);
    somaTriplo = (3*z + x);
    terceiroElevado = (z*z*z);

    cout << "A - " << multDobroMetade << endl;
    cout << "B - " << somaTriplo << endl;
    cout << "C - " << terceiroElevado << endl;

    return 0;
}
