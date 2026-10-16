#include <iostream>
using namespace std;

int main () {

    int n, exp;
    int result=1;

    cout << "Diga a base: ";
    cin >> n;
    cout << "Diga o expoente: ";
    cin >> exp;

    while (exp > 0) {
        result = result * n;
        exp--;

    }

    cout << "Resultado: " << result;

    return 0;

}
