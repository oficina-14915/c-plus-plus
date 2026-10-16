#include <iostream>
using namespace std;

int main () {
    float grausF, grausC;

    cout << "Diz a temperatura em graus Farenheit: ";
    cin >> grausF;

    grausC = (5 * (grausF-32) / 9);

    cout << grausC << " graus Celsius";

    return 0;
}
