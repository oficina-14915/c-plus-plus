#include <iostream>
using namespace std;

#define N 9

int main() {

    int arrayNum[N]  = {3, 60, 7, 0, 2, 11, 1, 12, 6};
    int aux;

    cout << "(original): ";

    for (int i = 0; i < N; i++) {
        //cout << arrayNum[i] << " ";
        cout << "\n #" << (i+1) << " = " << arrayNum[i];
    }

    for (int i = 0; i < N/2; i++) {

    }


    cout << "\n\n(invertido): ";
    for (int i = 0; i < N; i++) {
        cout << "\n #" << (i+1) << " = " << arrayNum[i];
    }



    return 0;
}




