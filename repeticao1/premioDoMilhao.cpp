#include <iostream>

using namespace std;

int main(){
    int numDias, qtdAcessos, soma = 0, cont = 0;

    cin >> numDias;
    while (numDias > 0){
        cin >> qtdAcessos;
        if (soma <= 1000000){
            soma += qtdAcessos;
            cont++;
            if (soma == 1000000){
                soma++;
            }
        }
        numDias--;
    }

    cout << cont << endl;

    return 0;
}
