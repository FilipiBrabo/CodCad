#include <iostream>

using namespace std;

int main(void) {
    int n;
    int m[11][11];

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j= 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += m[i][0];
    }

    int countLine    = 0;
    int countCollum  = 0;
    int countDigPrin = 0;
    int countDigSec  = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j= 0; j < n; j++) {
            countLine += m[i][j]; 
            countCollum += m[j][i];
            if (i == j) {
                countDigPrin += m[i][j];
            }
            if (i+j == n-1) {
                countDigSec += m[i][j];
            }      
        }
        if (countLine != soma || countCollum != soma) {
            cout << -1;
            return 0;
        }
        countLine = 0;
        countCollum = 0;
    }

    if (countDigPrin != soma || countDigSec != soma) {
        cout << -1;
        return 0;
    } else {
        cout << soma;
    }
    

    return 0;
}