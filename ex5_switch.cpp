#include <iostream>
using namespace std;

const int MAX_ALUNOS = 30;

int main () {

    int opcao;

    cout << "1 - Somar \n";
    cout << "2 - Subtrair \n";
    cout << "0 - Sair \n";
    cout << "Opcao: ";

    cin >> opcao;

    switch (opcao) {

        case 1:
            cout << "a";
            break;
        case 2:
            cout << "b";
            break;
        case 0:
            cout << "c";
            break;
        default:
            cout << "d";
            break;
    }

    return 0;
}
