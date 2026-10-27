#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string p1 = "1", p2 = "2", p3 = "3";
    string p4 = "4", p5 = "5", p6 = "6";
    string p7 = "7", p8 = "8", p9 = "9";
    string npeca = "X";
    bool jogo_terminou = false;
    int jogadas = 0;

    srand(time(0));

    cout << "=== JOGO DO GALO ===" << endl;
    cout << "Tu = X   |   Computador = O" << endl;

    while (!jogo_terminou) {
        // Mostrar o tabuleiro
        cout << "\n";
        cout << " " << p1 << " | " << p2 << " | " << p3 << endl;
        cout << "---+---+---" << endl;
        cout << " " << p4 << " | " << p5 << " | " << p6 << endl;
        cout << "---+---+---" << endl;
        cout << " " << p7 << " | " << p8 << " | " << p9 << endl;
        cout << endl;

        if (npeca == "X") {
            // ===== JOGADOR HUMANO =====
            int posicao;
            cout << "Tua vez (X). Diz onde queres jogar (1-9): ";
            cin >> posicao;

            bool jogada_valida = false;

            if (posicao == 1 && p1 == "1") { p1 = "X"; jogada_valida = true; }
            else if (posicao == 2 && p2 == "2") { p2 = "X"; jogada_valida = true; }
            else if (posicao == 3 && p3 == "3") { p3 = "X"; jogada_valida = true; }
            else if (posicao == 4 && p4 == "4") { p4 = "X"; jogada_valida = true; }
            else if (posicao == 5 && p5 == "5") { p5 = "X"; jogada_valida = true; }
            else if (posicao == 6 && p6 == "6") { p6 = "X"; jogada_valida = true; }
            else if (posicao == 7 && p7 == "7") { p7 = "X"; jogada_valida = true; }
            else if (posicao == 8 && p8 == "8") { p8 = "X"; jogada_valida = true; }
            else if (posicao == 9 && p9 == "9") { p9 = "X"; jogada_valida = true; }

            if (!jogada_valida) {
                cout << "Posicao invalida ou ja ocupada! Tenta outra vez." << endl;
                continue;
            }
        }
        else {
            // ===== COMPUTADOR (O) joga sozinho =====
            int posicao;
            bool jogada_valida = false;

            while (!jogada_valida) {
                posicao = rand() % 9 + 1;   // número de 1 a 9

                if (posicao == 1 && p1 == "1") { p1 = "O"; jogada_valida = true; }
                else if (posicao == 2 && p2 == "2") { p2 = "O"; jogada_valida = true; }
                else if (posicao == 3 && p3 == "3") { p3 = "O"; jogada_valida = true; }
                else if (posicao == 4 && p4 == "4") { p4 = "O"; jogada_valida = true; }
                else if (posicao == 5 && p5 == "5") { p5 = "O"; jogada_valida = true; }
                else if (posicao == 6 && p6 == "6") { p6 = "O"; jogada_valida = true; }
                else if (posicao == 7 && p7 == "7") { p7 = "O"; jogada_valida = true; }
                else if (posicao == 8 && p8 == "8") { p8 = "O"; jogada_valida = true; }
                else if (posicao == 9 && p9 == "9") { p9 = "O"; jogada_valida = true; }
            }

            cout << "Computador jogou na posicao " << posicao << endl;
        }

        jogadas++;

        // Verificar se alguém ganhou
        bool ganhou = false;

        if ((p1 == npeca && p2 == npeca && p3 == npeca) ||
            (p4 == npeca && p5 == npeca && p6 == npeca) ||
            (p7 == npeca && p8 == npeca && p9 == npeca) ||
            (p1 == npeca && p4 == npeca && p7 == npeca) ||
            (p2 == npeca && p5 == npeca && p8 == npeca) ||
            (p3 == npeca && p6 == npeca && p9 == npeca) ||
            (p1 == npeca && p5 == npeca && p9 == npeca) ||
            (p3 == npeca && p5 == npeca && p7 == npeca)) {
            ganhou = true;
        }

        if (ganhou) {
            cout << "\n";
            cout << " " << p1 << " | " << p2 << " | " << p3 << endl;
            cout << "---+---+---" << endl;
            cout << " " << p4 << " | " << p5 << " | " << p6 << endl;
            cout << "---+---+---" << endl;
            cout << " " << p7 << " | " << p8 << " | " << p9 << endl;
            cout << endl;

            if (npeca == "X")
                cout << "Parabens! Ganhaste!" << endl;
            else
                cout << "O computador ganhou!" << endl;

            jogo_terminou = true;
        }
        else if (jogadas == 9) {
            cout << "\n";
            cout << " " << p1 << " | " << p2 << " | " << p3 << endl;
            cout << "---+---+---" << endl;
            cout << " " << p4 << " | " << p5 << " | " << p6 << endl;
            cout << "---+---+---" << endl;
            cout << " " << p7 << " | " << p8 << " | " << p9 << endl;
            cout << endl;
            cout << "Empate!" << endl;
            jogo_terminou = true;
        }
        else {
            // Alternar o jogador
            if (npeca == "X")
                npeca = "O";
            else
                npeca = "X";
        }
    }

    cout << "\nFim do jogo. Obrigado por jogar!" << endl;
    return 0;
}
