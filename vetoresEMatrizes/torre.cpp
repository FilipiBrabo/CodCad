#include <iostream>
#include <cstring> 

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int m[n][n];
    int sumLines[n];
    int sumCols[n];
    
    // Inicialização dos vetores de soma
    for (int i =0; i < n; i++) {
        sumLines[i]=0;
        sumCols[i]= 0;
    }

    // Leitura da matriz e atualização dos vetores de soma
    for (int i = 0; i < n; i++) {        
        for (int j = 0; j < n; j++) {            
            cin >> m[i][j];
            sumLines[i] += m[i][j];
            sumCols[j] += m[i][j];
        }
    }

    // Pega o maior peso
    int max = -1;
    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp = sumLines[i] + sumCols[j] - 2*m[i][j];
            max = temp > max ? temp : max;
            temp = 0;
        }   
    }

    cout << max;
    return 0;
}