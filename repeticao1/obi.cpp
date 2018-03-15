#include <iostream>

using namespace std;

int main(){
    int numPartic, numPontos, x, y, cont = 0;

    cin >> numPartic >> numPontos;

    while (numPartic != 0){
        cin >> x >> y;
        if (x+y >= numPontos){
            cont ++;
        }
        numPartic--;
    }
    cout << cont << endl;
    return 0;
}
