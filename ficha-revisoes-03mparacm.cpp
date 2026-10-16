#include <iostream>
using namespace std;

int main () {
    float metros, milimetros;

    cout << "Diz-me um numero em metros: ";
    cin >> metros;

    milimetros = metros * 1000;

    cout << milimetros;
    cout << "mm";
    return 0;

}
