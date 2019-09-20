#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int desordenadas[n];
    int ordenadas[n];

    for(int i=0; i<n; i++) {
        cin >> desordenadas[i];
        ordenadas[i] = desordenadas[i];     
    }

    sort(ordenadas, ordenadas+n);

    int recolhidas[n];
    int qtdRecolhidas = 0;
    for (int i=0; i<n; i++) {
        if (desordenadas[i] != ordenadas[i]) {
            recolhidas[qtdRecolhidas++] = ordenadas[i];
        }
    }

    cout << qtdRecolhidas << endl;
    
    for(int i=0; i<qtdRecolhidas; i++) {
        cout << recolhidas[i] << " ";
    }
    return 0;
} 