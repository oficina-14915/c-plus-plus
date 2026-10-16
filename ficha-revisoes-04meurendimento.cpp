#include <iostream>
using namespace std;

int main () {
    float n1,n2,totalMes,totalAno;

    cout << "diz o quanto recebes por hora: ";
    cin >> n1;
    cout << "diz quantas horas trabalhas por mes: ";
    cin >> n2;

    totalMes = n1*n2;
    totalAno = totalMes*12;

    cout << "total ganho por mes: " << totalMes << endl;
    cout << "total ganho por ano: " << totalAno << endl;

    return 0;
}
