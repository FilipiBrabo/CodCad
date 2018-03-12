#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int h, p, f, d, dir;

	cin >> h >> p >> f >> d;

	if (f < h){
		if (h < p){
			if (d == 1){
				cout << "S" << endl;
			}else{
				cout << "N" << endl;
			}
		}else if (f < p) {
			if (d == 1){
				cout << "N" << endl;	
			}else{
				cout << "S" << endl;
			}	
		}else{
			if (d == 1){
				cout << "S" << endl;
			}else{
				cout << "N" << endl;
			}
		}
	}else{
		if (h > p){
			if (d == 1){
				cout << "N" << endl;
			}else{
				cout << "S" << endl;
			}
		}else if (p > f){
			if (d == 1){
				cout << "N" << endl;
			}else{
				cout << "S" << endl;
			}
		}else{
			if (d == 1){
				cout << "S" << endl;
			}else{
				cout << "N" << endl;
			}
		}
	}
	return 0;
}