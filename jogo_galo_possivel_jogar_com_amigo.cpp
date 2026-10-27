#include <iostream>
#include <string>
using namespace std;

int main() {
    string p1 = "1", p2 = "2", p3 = "3";
    string p4 = "4", p5 = "5", p6 = "6";
    string p7 = "7", p8 = "8", p9 = "9";

    string npeca = "X";
    bool jogo_terminou = false;
    int jogadas = 0;

    while (!jogo_terminou) {
        // Mostrar o tabuleiro
        cout << "\n";
        cout << " " << p1 << " | " << p2 << " | " << p3 << endl;
        cout << "---+---+---" << endl;
        cout << " " << p4 << " | " << p5 << " | " << p6 << endl;
        cout << "---+---+---" << endl;
        cout << " " << p7 << " | " << p8 << " | " << p9 << endl;
        cout << endl;

        // Pedir a jogada
        int posicao;
        cout << "Jogador " << npeca << ", diz onde queres jogar (1-9): ";
        cin >> posicao;

        // Verificar se a posicao e valida e esta livre
        bool jogada_valida = false;

        if (posicao == 1 && p1 == "1") { p1 = npeca; jogada_valida = true; }
        else if (posicao == 2 && p2 == "2") { p2 = npeca; jogada_valida = true; }
        else if (posicao == 3 && p3 == "3") { p3 = npeca; jogada_valida = true; }
        else if (posicao == 4 && p4 == "4") { p4 = npeca; jogada_valida = true; }
        else if (posicao == 5 && p5 == "5") { p5 = npeca; jogada_valida = true; }
        else if (posicao == 6 && p6 == "6") { p6 = npeca; jogada_valida = true; }
        else if (posicao == 7 && p7 == "7") { p7 = npeca; jogada_valida = true; }
        else if (posicao == 8 && p8 == "8") { p8 = npeca; jogada_valida = true; }
        else if (posicao == 9 && p9 == "9") { p9 = npeca; jogada_valida = true; }

        if (!jogada_valida) {
            cout << "Posicao invalida ou ja ocupada! Tenta outra vez." << endl;
            continue;
        }

        jogadas++;

        // Verificar se alguem ganhou
        bool ganhou = false;

        // Linhas
        if ((p1 == npeca && p2 == npeca && p3 == npeca) ||
            (p4 == npeca && p5 == npeca && p6 == npeca) ||
            (p7 == npeca && p8 == npeca && p9 == npeca)) {
            ganhou = true;
        }
        // Colunas
        else if ((p1 == npeca && p4 == npeca && p7 == npeca) ||
                 (p2 == npeca && p5 == npeca && p8 == npeca) ||
                 (p3 == npeca && p6 == npeca && p9 == npeca)) {
            ganhou = true;
        }
        // Diagonais
        else if ((p1 == npeca && p5 == npeca && p9 == npeca) ||
                 (p3 == npeca && p5 == npeca && p7 == npeca)) {
            ganhou = true;
        }

        if (ganhou) {
            // Mostrar tabuleiro final
            cout << "\n";
            cout << " " << p1 << " | " << p2 << " | " << p3 << endl;
            cout << "---+---+---" << endl;
            cout << " " << p4 << " | " << p5 << " | " << p6 << endl;
            cout << "---+---+---" << endl;
            cout << " " << p7 << " | " << p8 << " | " << p9 << endl;
            cout << endl;
            cout << "Parabens! O jogador " << npeca << " ganhou!" << endl;
            jogo_terminou = true;
        }
        else if (jogadas == 9) {
            // Empate
            cout << "\n";
            cout << " " << p1 << " | " << p2 << " | " << p3 << endl;
            cout << "---+---+---" << endl;
            cout << " " << p4 << " | " << p5 << " | " << p6 << endl;
            cout << "---+---+---" << endl;
            cout << " " << p7 << " | " << p8 << " | " << p9 << endl;
            cout << endl;
            cout << "Empate! O tabuleiro esta cheio." << endl;
            jogo_terminou = true;
        }
        else {
            // Alternar o jogador
            if (npeca == "X") {
                npeca = "O";
            } else {
                npeca = "X";
            }
        }
    }

    cout << "\nFim do jogo. Obrigado por jogar!" << endl;
    return 0;
}
