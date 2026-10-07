#include <iostream>
using namespace std;

int main () {

    int opcao;

    for (int i = 0; i<1 ; i=0){

        cout << "Escolha uma opcao: \n";
        cout << "0 - Sair do Programa \n";
        cout << "1  \n";
        cout << "2  \n";
        cout << "3  \n";

        cout << "Opcao:";

        cin >> opcao;


        switch (opcao) {

            case 0:
                break;

            case 1:
                cout << "E bom programador \n";
                break;

            case 2:
                cout << "E muito bom programador \n";
                break;

            case 3:
                cout << "E excelente programador \n";

                break;

            default:
                cout << "Nao sei o que me estas a pedir \n";
                break;

        }


        if (opcao == 0) break;
    }

    return 0;

}
