#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t1, t2, t3;

	cin >> t1 >> t2 >> t3;

	if (t1 < t2 && t1 < t3){
		if (t2 < t3){
			cout << "1\n2\n3" << endl;
		}else{
			cout << "1\n3\n2" << endl;
		}
	}else if (t2 < t1 && t2 < t3){
		if (t1 < t3){
			cout << "2\n1\n3" << endl;
		}else{
			 cout << "2\n3\n1" << endl;
		}
	} else{
		if (t2 < t1){
			cout << "3\n2\n1" << endl;
		}else{
			cout << "3\n1\n2" << endl;
		}
	}
	return 0;
}