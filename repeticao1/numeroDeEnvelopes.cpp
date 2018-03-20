#include <iostream>

using namespace std;

int main(){
    int tipos, qtd, menorQtd;

    cin >> tipos;
    cin >> qtd;
    menorQtd = qtd;
    for (int i = 1; i < tipos; i++){
        cin >> qtd;
        if (qtd < menorQtd){
            menorQtd = qtd;
        }
    }

    cout << menorQtd << endl;

    return 0;
}
