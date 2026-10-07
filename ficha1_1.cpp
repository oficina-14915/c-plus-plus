#include <iostream>
using namespace std;

int main () {

    int n1;
    cout << "Diz-me um numero:\n";

    cin >> n1;

    if (n1 < 0) {
        cout << "Numero Negativo";
    }

    else if (n1 == 0) {
        cout << "Numero Neutro";

    }

    else if (n1 > 0 , n1 <= 100){
        cout << "Numero Positivo Pequeno";

    }

    else {
        cout << "Numero Enorme";
    }


    return 0;

}
