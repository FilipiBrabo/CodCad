#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, c;

	cin >> a >> b >> c;

	if (a == b || b == c || a == c){
		cout << "S" << endl;
	}else if ((a+b == c) || (b+c == a) || (a+c == b)){
		cout << "S" << endl;
	}else {
		cout << "N" << endl;
	}
	return 0;
}