#include <iostream>

using namespace std;

int main(void) {

    int n;
    cin>>n;
    int tab[51];

    if (n ==0) {
        cout << 0 << endl;
        return 0;
    }

    for (int i=0; i < n; i++) {
        cin>>tab[i];
    }

    int numMinas = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            numMinas += tab[i];
            numMinas += tab[i+1];
        } else if (i == n-1) {
            numMinas += tab[i-1];
            numMinas += tab[i];
        } else {
            numMinas += tab[i-1];
            numMinas += tab[i];
            numMinas += tab[i+1];
        }
        cout << numMinas << endl;
        numMinas = 0;
    }
}