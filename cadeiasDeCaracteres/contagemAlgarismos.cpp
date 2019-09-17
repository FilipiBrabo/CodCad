#include <stdio.h>
#include <iostream>

using namespace std;

int main(void) {

    int alg[10];
    int n;
    scanf("%d", &n);

    for(int i=0; i<10; i++) {
        alg[i] =0;
    }

    for (int i=0; i<n; i++) {
        int num;
        scanf("%d", &num);

        while(num > 0) {
            alg[num%10]++;
            num = (int) (num/10);
        }  
    }

    for(int i=0; i<10; i++) {
        cout << i << " - " << alg[i] << endl;;
    }
    return 0;
}

