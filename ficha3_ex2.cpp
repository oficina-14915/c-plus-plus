#include <iostream>

using namespace std;

int funcaoAscii(int num) {
    if (num > 255) {
        return 0;
    } else {
       cout << char(num) << " ";
        num ++;
        return funcaoAscii(num);
    }
}

int main () {

    int numero = 000;

    cout << funcaoAscii(numero);

    return 0;
}
