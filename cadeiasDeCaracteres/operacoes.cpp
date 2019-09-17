#include <iostream>

using namespace std;

int main(){
	
	double num1, num2, total;
	char op;

	cin >> op;
	cout.precision(2);
	cout.setf(ios::fixed);
	cin >> num1 >> num2;
	switch(op){
		case('M'):
			total = num1*num2;
			cout << total << endl;
			break;
		case('D'):
			total = num1/num2;
			cout << total << endl;
			break;
	}
	return 0;
}
