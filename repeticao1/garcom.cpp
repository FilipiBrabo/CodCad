#include <iostream>

using namespace std;

int main(){
    int numBandejas, latas, copos, total = 0;

    cin >> numBandejas;

    for(int i = 0; i < numBandejas; i++){
        cin >> latas >> copos;
        if (latas > copos){
            total += copos;
        }
    }

    cout << total << endl;

    return 0;
}
