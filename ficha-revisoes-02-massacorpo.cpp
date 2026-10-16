#include <iostream>
using namespace std;

int main () {
    float peso, gravidade, massa;
    cout << "Diz-me o teu peso(Kg): ";
    cin >> peso;
    cout << "Diz-me a aceleracao da gravidade: ";
    cin >> gravidade;

    massa = peso / gravidade;

    cout << massa;

    return 0;

}
