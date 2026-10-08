#include <iostream>
using namespace std;

int main () {

    int n1, n2, aux, result = 0;

    cout << "digite o primeiro numero: \n";
    cin >> n1;
    cout << "digite o segundo numero: \n";
    cin >> n2;

    if (n2 < n1){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for (int i = n1; i <= n2 ; i++){
        result = result + i;

    }

    cout << "resultado: \n";
    cout << result;

    return 0;
}
