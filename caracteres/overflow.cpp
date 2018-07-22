#include <iostream>

using namespace std;

int main(){
	int num1, num2, total, max;
	char op;

	cin >> max;
	cin >> num1 >> op >> num2;
	
	switch(op){
		case('+'):
			total = num1 + num2;	
			break;
		case('*'):
			total = num1 * num2;
			break;
	}

	if (total > max)
		cout << "OVERFLOW" << endl;
	else
		cout << "OK" << endl;

	return 0;
}
