#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrarTabuleiro(string t[]) {
    cout << "\n";
    cout << " " << t[0] << " | " << t[1] << " | " << t[2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << t[3] << " | " << t[4] << " | " << t[5] << endl;
    cout << "---+---+---" << endl;
    cout << " " << t[6] << " | " << t[7] << " | " << t[8] << endl;
    cout << endl;
}

bool ganhou(string t[], string peca) {
    if ((t[0] == peca && t[1] == peca && t[2] == peca) ||
        (t[3] == peca && t[4] == peca && t[5] == peca) ||
        (t[6] == peca && t[7] == peca && t[8] == peca) ||
        (t[0] == peca && t[3] == peca && t[6] == peca) ||
        (t[1] == peca && t[4] == peca && t[7] == peca) ||
        (t[2] == peca && t[5] == peca && t[8] == peca) ||
        (t[0] == peca && t[4] == peca && t[8] == peca) ||
        (t[2] == peca && t[4] == peca && t[6] == peca)) {
        return true;
    }
    return false;
}

int main() {
    string tabuleiro[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    string peca = "X";
    int jogadas = 0;
    bool terminou = false;

    srand(time(0));

    cout << "=== JOGO DO GALO ===" << endl;
    cout << "Tu = X   |   Computador = O" << endl;

    while (!terminou) {
        mostrarTabuleiro(tabuleiro);

        if (peca == "X") {
            // Jogador humano
            int posicao;
            cout << "Tua vez (X). Escolhe (1-9): ";
            cin >> posicao;

            if (posicao < 1 || posicao > 9 || tabuleiro[posicao-1] == "X" || tabuleiro[posicao-1] == "O") {
                cout << "Posicao invalida! Tenta outra vez." << endl;
                continue;
            }
            tabuleiro[posicao-1] = "X";
        }
        else {
            // Computador joga sozinho (escolhe posição livre ao acaso)
            int pos;
            do {
                pos = rand() % 9;
            } while (tabuleiro[pos] == "X" || tabuleiro[pos] == "O");

            tabuleiro[pos] = "O";
            cout << "Computador jogou na posicao " << (pos + 1) << endl;
        }

        jogadas++;

        if (ganhou(tabuleiro, peca)) {
            mostrarTabuleiro(tabuleiro);
            if (peca == "X")
                cout << "Parabens! Ganhaste!" << endl;
            else
                cout << "O computador ganhou!" << endl;
            terminou = true;
        }
        else if (jogadas == 9) {
            mostrarTabuleiro(tabuleiro);
            cout << "Empate!" << endl;
            terminou = true;
        }
        else {
            peca = (peca == "X") ? "O" : "X";
        }
    }

    cout << "\nFim do jogo!" << endl;
    return 0;
}
