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
    int quemJoga = 1; // 1-X- 1ºjoga // 2-O- 2ºjoga
    int quemGanhou = 0;
    int colunaJogar = 0;
    bool jogou = false;
    preencheTabuleiro(tabuleiro);

    do {
        mostraTabuleiro(tabuleiro);
        colunaJogar = pedePecaJogador();
        jogou = colocaPecaTabuleiro("X", colunaJogar, tabuleiro);

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

    for (int i = 0; i < LINHAS; i++) {

        num = 6;
        num = num - i;
        cout << num;

        for (int j = 0; j < COLUNAS; j++) {
            cout << " |"<< arr[i][j] << "|";
        }
        cout << endl;
    }
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
    cout << "Coluna(1-9): ";
    cin >> colunaEscolhida;

    return colunaEscolhida;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]){

    int linha = 5;
    coluna--;

    if (arr[linha][coluna] == " ") {
        arr[linha][coluna] = peca;
    }
    return false;
}

bool tabulerioCheio(string arr[LINHAS][COLUNAS]){
    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]){
    return false;
}
