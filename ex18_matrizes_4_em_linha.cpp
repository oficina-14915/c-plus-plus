#include <iostream>
#include <stdio.h>
using namespace std;

// JOGO EM LINHA //

const int LINHAS = 6;
const int COLUNAS = 9;

void preencheTabuleiro(string arr[LINHAS][COLUNAS]);
void mostraTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]);
bool tabulerioCheio(string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]);

int main() {
    string tabuleiro[LINHAS][COLUNAS];
    string pecaAJogar;
    int quemJoga = 1; // 1-X- 1ºjoga // 2-O- 2ºjoga
    int quemGanhou = 0;
    int colunaJogar = 0;
    bool jogou = false;
    preencheTabuleiro(tabuleiro);

    do {
        mostraTabuleiro(tabuleiro);

        if(quemJoga == 1) {
            pecaAJogar = "X";
            cout << "\nJogador#1(X)\n";
            jogou = true;

        } else if(quemJoga == 2) {
            pecaAJogar = "O";
            cout << "\nJogador#2(O)\n";
            jogou = true;
        }

        colunaJogar = pedePecaJogador();
        jogou = colocaPecaTabuleiro("X", colunaJogar, tabuleiro);

        if (jogou = true) {

            if(quemJoga == 1) {
                quemJoga = 2;
            } else {
                quemJoga = 1;
            }
        }

    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabulerioCheio(tabuleiro));

    //tabuleiro[0][1] = "s";
    //mostraTabuleiro(tabuleiro);
    //mostraTabuleiro(tabuleiro);

    return 0;
}

void preencheTabuleiro(string arr[LINHAS][COLUNAS]){

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            arr[i][j] = " ";
        }
    }
}

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {
    cout << "============= 4 EM LINHA =============\n\n";
    int num;

    for (int i = LINHAS - 1; i >= 0; i--) {
        cout << i + 1;
        for (int j = 0; j < COLUNAS; j++) {
            cout << " |"<< arr[i][j] << "|";
        }
        cout << endl;
    }

    cout << " ";
    for (int j = 0; j < COLUNAS; j++) {
        cout << " |"<< "-" << "|";
    }

    cout << endl;
    cout << " ";
    for (int j = 0; j < COLUNAS; j++) {
        cout << " |"<< j + 1 << "|";
    }

    cout << endl;
    cout << "=====================================\n";

    //cout << "\nLinha 1: Coluna 2: -" << arr[0][1] << "-";
    //arr[0][1] = "a";

}

int pedePecaJogador(){
    int colunaEscolhida;
    do {
    cout << "Coluna(1-9): ";
    cin >> colunaEscolhida;

    if (colunaEscolhida < 1 || colunaEscolhida > 9) {
        cout << "Jogada invalida!!!\n";
    }
    } while (colunaEscolhida < 1 || colunaEscolhida > 9);

    return colunaEscolhida;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]){

    int linha = 0;
    coluna--;

    for (int i = -1; i <= 6; i++) {
        if (arr[linha + i][coluna] == " ") {
            arr[linha + i][coluna] = peca;
            return true;
        }
    }

    return false;
}

bool tabulerioCheio(string arr[LINHAS][COLUNAS]){



    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]){
    return false;
}
