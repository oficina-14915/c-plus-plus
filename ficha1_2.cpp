#include <iostream>
using namespace std;

int main () {

    int opcao;

    cout << "Escolha uma opcao: \n";
    cout << "0 - Sair do Programa \n";
    cout << "1  \n";
    cout << "2  \n";
    cout << "3  \n";

    cout << "Opcao:";

    cin >> opcao;

    switch (opcao) {

        case 1:
            cout << "E bom programador";
            break;

        case 2:
            cout << "E muito bom programador";
            break;

        case 3:
            cout << "E excelente programador";
            break;

        default:
            cout << "Nao sei o que me estas a pedir";
            break;

    }

    return 0;

}
