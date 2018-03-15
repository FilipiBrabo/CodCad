#include <iostream>

using namespace std;

int main(){
    int x, div = 1;

    cin >> x;

    while (div <= x/2){
        if (x%div == 0){
            cout << div << " ";
        }
        div++;
    }
    cout << x << endl;
    return 0;
}
