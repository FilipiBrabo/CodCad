#include <iostream>

using namespace std;

int main(void) {

    int n; 
    cin >> n;
    char gabarito[n];
    char resposta[n];

    // Leitura
    for (int i=0; i<n; i++) {
        cin >> gabarito[i];
    }
    for (int i=0; i<n; i++) {
        cin >> resposta[i];
    }

    int certas = 0;
    for (int i=0; i<n; i++) {
        if (gabarito[i] == resposta[i]) {
            certas++;
        }
    }

    cout << certas;
    return 0;
}