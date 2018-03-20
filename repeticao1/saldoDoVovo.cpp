#include <iostream>

using namespace std;

int main(){
    int numDias, saldo, menorSaldo, valor;

    cin >> numDias >> saldo;
    menorSaldo = saldo;

    while (numDias > 0){
        cin >> valor;
        saldo += valor;
        if (saldo < menorSaldo){
            menorSaldo = saldo;
        }
        numDias--;
    }
    
    cout << menorSaldo << endl;        
    
    return 0;
}
