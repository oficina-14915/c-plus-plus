#include <iostream>
#include <time.h>

using namespace std;

time_t now = time(NULL);
struct tm * t = localtime (&now);

void menu() {
    cout << "=============================== \n";
    cout << "              MENU              \n";
    cout << "Diga a operacao que quer fazer: \n";
    cout << "1 - dar o ano                   \n";
    cout << "2 - sair do programa            \n";
    cout << "=============================== \n";
}

int getYear() {return (t -> tm_year + 1900); }
int getMouth() {return (t -> tm_mon + 1); }
int getDay() {return t -> tm_mday; }


int aMinhaIdade(int ano, int mes, int dia) {
    int aux = getYear() - ano;

    if (getMouth() < mes) {
        aux --;
    } else {
        if (getDay() < dia && getMouth() == mes) {
            aux --;
        }

    }
    return aux;

}

int main () {
    int opcao, year;

    cout << "a minha idade = " << aMinhaIdade(2009, 7, 17) << " anos\n";

    while (opcao != 2) {
        menu();
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 1) {
            year = getYear();
            cout << year;
            cout << "\n";
        } else if (opcao == 2) {
        } else {
            cout << "Nao tem essa opcao\n";
        }
    }

    return 0;
}
