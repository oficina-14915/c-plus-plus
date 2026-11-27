#include <iostream> //io em c++

using namespace std;

int main() {

    string myNomes[] = {"Bob", "Roberto", "Pablo", "Jorge"};

    for (string nomes : myNomes) {
        cout << nomes << "\n";
    }
}