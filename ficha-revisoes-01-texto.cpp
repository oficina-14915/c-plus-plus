#include <iostream>
using namespace std;

int main () {
    int idade;
    string nome, localidade, genero, mensagem = "";
    cout << "Diz-me o teu nome: ";
    cin >> nome;
    cout << "Diz-me a tua Idade: ";
    cin >> idade;
    cout << "Diz-me a tua Localidade: ";
    cin >> localidade;
    cout << "Diz-me o teu genero(M/F): ";
    cin >> genero;


    if (genero == "M") {
        mensagem = "Caro Sr. ";
    } else if (genero == "F") {
        mensagem = "Cara Sra. ";
    }

    mensagem = mensagem + nome;

    if (idade >= 18) {
        mensagem = mensagem +" e maior de idade ";

    } else {
        mensagem = mensagem +" e menor de idade ";

    }

    mensagem = mensagem + "e mora em ";
    mensagem = mensagem + localidade;

    cout << mensagem;

    return 0;

}
