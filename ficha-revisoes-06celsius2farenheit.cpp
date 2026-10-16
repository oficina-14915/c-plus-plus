#include <iostream>
using namespace std;

int main () {
    float grausF, grausC;

    cout << "Diz a temperatura em graus Celsius: ";
    cin >> grausC;

    grausF = ((grausC * 9) / 5) + 32;


    grausC = (5 * (grausF-32) / 9);


    cout << grausF << " graus Farenheit";

    return 0;
}
