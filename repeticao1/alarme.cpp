#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int hAtual, minAtual, hDesp, minDesp, timeSleep, aux1, aux2;

    cin >> hAtual >> minAtual >> hDesp >> minDesp;
    while (hAtual != 0 || minAtual || 0 || hDesp != 0 || minDesp != 0){
        if (hDesp < hAtual){
            hDesp += 24;
            timeSleep = (hDesp - hAtual -1)*60;
            timeSleep += 60 + minDesp - minAtual;
        }else if (hDesp == hAtual && minDesp < minAtual){
            timeSleep = 24*60;
            timeSleep += minDesp - minAtual; 
        }else{
            timeSleep = (hDesp -hAtual -1)*60;
            timeSleep += 60 + minDesp - minAtual;
        }

        cout << timeSleep << endl;
        cin >> hAtual >> minAtual >> hDesp >> minDesp;
    }
    return 0;
}
