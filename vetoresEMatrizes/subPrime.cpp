#include <iostream>

using namespace std;

int main(void) {
    int n, b;   
    int reservas[21];

    while(true){ 
        cin >> b >> n;
        if (b == 0 && n ==0) {
            break;
        }        

        for (int i=1; i <= b; i++) {
            cin >> reservas[i];
        }

        for (int i=1; i <= n; i++) {
            int d, c, v;

            cin >> d >> c >> v;
            reservas[d] -= v;
            reservas[c] += v;
        }

        int flag = 0;
        for (int i=1; i <= b; i++) {
            if (reservas[i] < 0) {
                flag = 1;
            }
        }

        if (flag == 0) {
            cout << "S\n";
        } else {
            cout << "N\n";
        }
    }
    return 0;
}