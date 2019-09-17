#include <iostream>

using namespace std;

int main(void) {

    int n;
    cin >> n;
    int fita[10010];

    for (int i=0; i<n; i++) {
        cin>>fita[i];
    }

    for (int i=0; i<n; i++) {
        int esq = 100000;
        int dir = 100000;

        if (fita[i] == -1) {
            int j = i;
            for (int j = i; j < n; j++){
                if (fita[j] == 0) {
                    dir = j-i;
                    break;
                }
                
            }
            for (int j = i; j > -1; j--) {
                if (fita[j] == 0) {
                    esq = i - j;
                    break;
                }
            }

            if (esq <= dir) {
                fita[i] = esq;
            } else {
                fita[i] = dir;
            }

            if (fita[i] > 9) {
                fita[i] = 9;
            }
        }
    }

    for (int i = 0; i < n; i ++) {
        cout << fita[i] << " ";
    }

    return 0;
}