#include <iostream>

using namespace std;

int main(){
    int pontAtual, qtdFases, qtdPontos, pontTotal;

    cin >> pontAtual >> qtdFases;
    pontTotal = pontAtual;

    for (int i = 0; i < qtdFases; i++){
        cin >> qtdPontos;
        if (pontTotal > 100)
            pontTotal = 100;
        else if (pontTotal < 0)
            pontTotal = 0;
        pontTotal += qtdPontos;
    }
    if (pontTotal > 100){
        cout << "100" << endl;
    }else if (pontTotal < 0){
        cout << "0" << endl;
    }else{
        cout << pontTotal << endl;
    }
    return 0;
}
