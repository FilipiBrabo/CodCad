#include <iostream>
#include <math.h>

using namespace std;

bool eh_primo(int x){
    //Seu código aqui.
    bool ehPrimo = true;
    if (x==2) return true;
    if (x%2 == 0 || x == 1) return false;

    for (int i=3; i <= sqrt(x); i+=2) {
        if (x%i == 0) {
            ehPrimo = false;
        }
    }

    return ehPrimo; 
}

int main(){
    int x;

    cin>>x;

    if(eh_primo(x)){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }
}