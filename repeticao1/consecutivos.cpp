#include <iostream>

using namespace std;

int main(){
    int qtd, valor, aux, pontos = 0, cont = 0;

    cin >> qtd;
    cin >> valor;
    aux = valor;
    for (int i = 1; i < qtd; i++){
        cin >> valor;
        if (aux == valor){
            cont++;
        }else{
            if (cont + 1 > pontos)
                pontos = cont + 1;
            cont = 0;
        }
        aux = valor;
    }    
    
    if (cont + 1 > pontos)
         pontos = cont + 1;

    cout << pontos << endl;
    return 0;
}
