#include <iostream>

using namespace std;

int main(){
    int num, maiorNum = -1;

    while (cin >> num && num != 0){
        if (num > maiorNum){
            maiorNum = num;
        }
    }

    cout << maiorNum << endl;
        
    return 0;
}
