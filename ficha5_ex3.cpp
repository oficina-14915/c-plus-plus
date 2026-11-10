#include <iostream>
using namespace std;

int main() {
    float arrayMult[13] {4, -11, 3.3, -0.1, 1.42, 5.3, 12, 0.4, -1.02, 9, -3.4, 0.5, -2.09};
    float mult = 1;

    for (int i  = 0; i < 13; i++) {
            mult = mult * arrayMult[i];

    }

    cout << "O resultado =  " << mult;

    return 0;
}
