#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int l1, h1, l2, h2;

	cin >> l1 >> h1 >> l2 >> h2;

	if (l1*h1 > l2*h2) cout << "Primeiro" << endl;
	else if (l1*h1 < l2*h2) cout << "Segundo" << endl;
	else cout << "Empate" << endl;
	return 0;
}