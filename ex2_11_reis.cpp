#include <iostream>
#include <string.h>

using namespace std;

int main () {

    char nome[31], primeiraLetra='  ', segundaLetra =' ';

    printf("Nome: ");
    //scanf("%30s", nome);

    cin.getline(nome, 31);

    printf("\nOla, %s !\n", nome);

    printf("\nOla, %c !\n", nome[0]);
    cout << "\nOla, " << nome[0] << " !\n";

    primeiraLetra = nome [0];
    for (int i=0; i<31; i++) {
        if (nome [i] == ' ') {
            segundaLetra = nome [i+1];

        }

    }
    cout << "\n\ Letras: " << primeiraLetra << segundaLetra;

return 0;
}
