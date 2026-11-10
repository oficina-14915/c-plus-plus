#include <iostream>

using namespace std;

int main() {

    int quantosNumerosSoma;
    int n;
    int num[n], soma = 0;

    cout <<"Quantos numeros vao ser somados: ";
    cin >> quantosNumerosSoma;

    if (quantosNumerosSoma > 20) {
        cout << "Nao pode ter mais de 20 numeros";

    } else if (quantosNumerosSoma < 1) {
        cout << "Tem de ser maior que 0";

    } else {
        for (int i = 0; i < quantosNumerosSoma; i++) {
            cout << "Diz os numeros(um por vez): ";
            cin >> num[n];

            soma = soma + num[n];

        }

        cout << soma;
    }

    return 0;
}
