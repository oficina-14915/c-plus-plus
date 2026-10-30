#include <iostream>
#include <string.h>
using namespace std;

char grelha[9] = { '0', '1', '2', '3', '4', '5', '6', '7', '8'};
bool jogoTerminou = false, aceitarJogada = false;
string mensagem, peca = "X";
int posicao;

void grelhaf() {
    cout << "JOGO DO GALO\n";
    cout << "\n" << grelha[0] << "|" << grelha[1] << "|" << grelha[2];
    cout << "\n" << grelha[3] << "|" << grelha[4] << "|" << grelha[5];
    cout << "\n" << grelha[6] << "|" << grelha[7] << "|" << grelha[8];

}

int jogoAcabou() {
    if (grelha[0]!='0' && grelha[1]!='1' && grelha[2]!='2' &&
        grelha[3]!='3' && grelha[4]!='4' && grelha[5]!='5' &&
        grelha[6]!='6' && grelha[7]!='7' && grelha[8]!='8' ) {
        jogoTerminou = true;
    }

    return 0;
}

int alguemVencedor() {
    if (grelha[0]== grelha[1] && grelha[1] == grelha[2]) {jogoTerminou = true;}
    else if (grelha[3]== grelha[4] && grelha[4] == grelha[5]) {jogoTerminou = true;}
    else if (grelha[6]== grelha[7] && grelha[7] == grelha[8]) {jogoTerminou = true;}
    else if (grelha[0]== grelha[3] && grelha[3] == grelha[6]) {jogoTerminou = true;}
    else if (grelha[1]== grelha[4] && grelha[4] == grelha[7]) {jogoTerminou = true;}
    else if (grelha[2]== grelha[5] && grelha[5] == grelha[8]) {jogoTerminou = true;}
    else if (grelha[0]== grelha[4] && grelha[4] == grelha[8]) {jogoTerminou = true;}
    else if (grelha[6]== grelha[4] && grelha[4] == grelha[2]) {jogoTerminou = true;}
    else {}

    return 0;
}

int colocarPecas() {
    switch(posicao) {
        case 0:
            if (grelha[0] =='0') {
                grelha[0] = peca[0];
                aceitarJogada = true;
            }
            break;

        case 1:
            if (grelha[1] =='1') {
                grelha[1] = peca[0];
                aceitarJogada = true;
            }
            break;
        case 2:
            if (grelha[2] =='2') {
                grelha[2] = peca[0];
                aceitarJogada = true;
            }
            break;
        case 3:
            if (grelha[3] =='3') {
                grelha[3] = peca[0];
                aceitarJogada = true;
            }
            break;
        case 4:
            if (grelha[4] =='4') {
                grelha[4] = peca[0];
                aceitarJogada = true;
            }
            break;
        case 5:
            if (grelha[5] =='5') {
                grelha[5] = peca[0];
                aceitarJogada = true;
            }
            break;
        case 6:
            if (grelha[6] =='6') {
                grelha[6] = peca[0];
                aceitarJogada = true;
            }
            break;
        case 7:
            if (grelha[7] =='7') {
                grelha[7] = peca[0];
                aceitarJogada = true;
            }
            break;
        case 8:
            if (grelha[8] =='8') {
                grelha[8] = peca[0];
                aceitarJogada = true;
            }
            break;
        default:
            cout << "0 a 8 apenas \n";
                break;
    }

    return 0;
}

int main () {
    mensagem = "\nJogador 1 (X): \n";

    while (!jogoTerminou){
        grelhaf();
        if (peca == "X") {
            cout << mensagem;
        } else {
            cout << "\nJogador 2 (O): \n";
        }

        cin >> posicao;

        colocarPecas();
        if (aceitarJogada) {
            if(peca == "X"){
                peca = "O";
            } else {
                peca = "X";
            }
        } else{
            cout << "\nPosicao ja preenchida \n";
        }
        jogoAcabou();
        alguemVencedor();
        if (jogoTerminou) {
            if(peca == "X"){
                peca = "O";
            } else{
                peca = "O";
                peca = "X";
            }
            cout << "O jogador " << peca << " ganhou!";
        }

    }

    //string x = "s";
    //grelha[8] = peca[0];
    //cout << grelha[8];

    return 0;
}
