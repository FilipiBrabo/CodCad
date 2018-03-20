#include <iostream>

using namespace std;

int main(){
    int numPessoas, tempo, tempoAntes, tempoTotal = 0, tempoInicio;
    cin >> numPessoas;
    
    cin >> tempo;
    tempoAntes = tempo;
    tempoInicio = tempo;

    for (int i = 0; i < numPessoas; i++){
        cin >> tempo;
        if (tempo - tempoAntes <= 10){
            tempoAntes = tempo;
        }else{
            tempoTotal += tempo + 10 - tempoAntes;
            tempoInicio = tempo;
        }
        tempoAntes = tempo;
    }
    if (tempoTotal = 0)
        tempoTotal = tempo+10;
    
    cout << tempoTotal << endl;
    return 0;
}
