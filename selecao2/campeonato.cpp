#include <iostream>

using namespace std;

int main(){
	int vit1, vit2, emp1, emp2, salgol1, salgol2, pontos1, pontos2;

	cin >> vit1 >> emp1 >> salgol1 >> vit2 >> emp2 >> salgol2;
	
	pontos1 = 3*vit1 + emp1;
	pontos2 = 3*vit2 + emp2;

	if (pontos1 > pontos2){
		cout << "C" << endl;
	}else if (pontos2 > pontos1){
		cout << "F" << endl;
	}else if (salgol1 > salgol2){
		cout << "C" << endl;
	}else if (salgol2 > salgol1){
		cout << "F" << endl;
	}else{
		cout << "=" << endl;
	}
	
	return 0;
}
