#include <iostream>
#include <stdio.h>
using namespace std;

// JOGO EM LINHA //

const int LINHAS = 6;
const int COLUNAS = 9;

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

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {

    //cout << "\nLinha 1: Coluna 2: -" << arr[0][1] << "-";
    //arr[0][1] = "a";

}

int pedePecaJogador(){
    return 0;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]){
    return false;
}

bool tabulerioCheio(string arr[LINHAS][COLUNAS]){
    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]){
    return false;
}
