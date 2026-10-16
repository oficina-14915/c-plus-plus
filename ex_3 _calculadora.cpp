#include <iostream> //io em c++
#include <stdio.h> //io em c

using namespace std;

int main() {
    string operacao;
    float n1, n2;
    //float calculo;
    //int calculo;
    cout << "Operacoes possiveis:\n ";
    cout << "somar\n";
    cout << "subtrair\n";
    cout << "multiplicar\n";
    cout << "dividir\n";

    cout <<"Diga qual operacao quer efetuar: ";
    cin >> operacao;

    //cout << "Escolheste: " << operacao;

    cout << "Diz-me o primeiro numero: ";
    cin >> n1;
    cout << "Diz-me o segundo numero: ";
    cin >> n2;

    if (operacao == "somar") {
        cout << "soma = " << (n1+n2);
    }
     if (operacao == "subtrair") {
        cout << "divisao = " << (n1-n2);

    } if (operacao == "multiplicar") {
        cout << "multiplicacao = " << (n1*n2);

    } if (operacao == "dividir") {

        //calculo = (n1) / (n2);
        //calculo = (n1*1.0) / (n2*1.0);

        cout << "divisao = " << (n1/n2);

    }

}
