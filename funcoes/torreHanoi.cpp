#include <iostream>

using namespace std;

int hanoi(int n){
	if(n == 1) {
		return 1;
	}else {
		return 1+2*(hanoi(n-1));
	}
}

int main(void) {
    int n;

    int i=1;
    while(true) {
        cin >> n;
        if (n == 0) break;

        cout << "Teste " << i++ << endl;
        cout <<  hanoi(n) << endl << endl;
    }
    return 0;
}