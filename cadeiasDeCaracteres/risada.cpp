#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {    

    char risada[51];
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    
    // Leitura da risada
    int i=0;
    while(true) {
        scanf("%c", &risada[i]);
        if (risada[i] == '\n') {
            break;
        }
        i++;
    }    
    int tam = i;

    // Remover consoantes
    char semCons[tam];
    int k = 0;    
    for (i=0; i<tam; i++) {
        for (int j=0; j<5; j++) {
            if (risada[i] == vogais[j]) {
                semCons[k] = risada[i];
                k++;
            }
        }
    }

    // Valida risada
    int engracada = 1;
    for (i=0; i<k; i++) {
        if (semCons[i] != semCons[k-i-1]) {
            engracada =0;
            break;
        }
    }
    
    if (engracada == 1) {
        cout << "S";
    } else {
        cout << "N";
    }

    return 0;
}