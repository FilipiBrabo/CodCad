#include <iostream>

using namespace std;

int main(){
    int numPessoas, tempo, tempoAntes, tempoTotal = 10, tempoInicio;
    cin >> numPessoas;
    
    cin >> tempo;
    tempoAntes = tempo;
    //tempoInicio = tempo;

    for (int i = 1; i < numPessoas; i++){
        cin >> tempo;
		if (tempo - tempoAntes > 10)
				tempoTotal += 10;
		else
			tempoTotal += tempo - tempoAntes;
		tempoAntes = tempo;
	}  

    cout << tempoTotal << endl;
    return 0;
}
