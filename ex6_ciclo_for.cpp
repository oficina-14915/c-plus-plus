#include <iostream>
using namespace std;

const int MAX_ALUNOS = 30;

int main () {

    int opcao;

    // i++ === i+1 === i += 1
    // i-- === i-1 === i -= 1
    cout << "Numeros entre 1 e 10\n";
    for (int i=1; i<=10; i++) {
        cout << i << endl;
    }

    cout << "Numeros impares entre 1 e 10\n";
    for (int i=1; i<=10; i++ << i++) {
        cout << i << endl;
    }

    cout << "Numeros impares entre 1 a 5\n";
    for (int i=1; i<=10; i++ <<i++) {
        //if (i > 5) break;
        cout << i << endl;
        if (i >= 5) break;
    }
    return 0;
}
