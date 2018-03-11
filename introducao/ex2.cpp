#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	double a, b;

	cin >> a >> b;

	cout.precision(2);
	cout.setf(std::ios::fixed);
	cout << a/b << endl;

	return 0;
}