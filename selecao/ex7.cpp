#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	double vet[5] , soma = 0, maior, menor;
	int indMaior, indMenor;
	for (int i = 0; i<5; i++){
		cin >> vet[i];
	}
	
	maior = vet[0];
	menor = vet[0];
	indMaior = 0;
	indMenor = 0;
	
	for (int i = 0; i < 5; i++){
		if (vet[i] > maior){
			maior = vet[i];
			indMaior = i;
		}else if (vet[i] < menor){
			menor = vet[i];
			indMenor = i;
		}
	}

	vet[indMaior] = 0;
	vet[indMenor] = 0;
	
	for (int i = 0; i < 5; i++){
		soma += vet[i];
	}

	cout.setf(ios::fixed);
	cout.precision(1);
	cout << soma << endl;
	
	return 0;
}
