#include <iostream>
#include <algorithm>

using namespace std;

struct Piloto {
    int id;
    int *posicoes;
    int pontuacao;
};

int main(void) {

    int numPilotos, numCorridas;
    

    while(cin >> numCorridas >> numPilotos && numPilotos != 0 && numCorridas != 0) {
        Piloto pilotos[numPilotos];

        // Seta os ids e cria o vetor de posicoes
        for (int i=0; i<numPilotos; i++) {
            pilotos[i].id = i+1;
            pilotos[i].posicoes = new int[numCorridas];
        }

        // Leitura das posicoes de cada corredor
        for (int i=0; i<numCorridas; i++) {
            for(Piloto p : pilotos) {
                cin >> p.posicoes[i]; 
            }
        }

        int numSistemas;
        cin >> numSistemas;

        // Para cada sistema de pontuacao vamos calcular o piloto vencedor
        for (int i=0; i<numSistemas; i++) {

            // Zera a pontuação de cada piloto
            for (Piloto p : pilotos) {
                p.pontuacao = 0;
            }

            // Le a qtd de posições que receberá pontos neste sistema
            int qtdPos;
            cin >> qtdPos;

            // Cria um vetor para guardar os pontos de cada posição
            int * pontuacoes = new int[qtdPos];

            // Le a pontuação de cada posição
            for (int i=0; i<qtdPos; i++) {
                cin >> pontuacoes[i];
            }

            // Soma a pontuacao de cada piloto para cada corrida
            for (int i=0; i<numCorridas; i++){
                for (Piloto p : pilotos) {
                    p.pontuacao 
                }
            } 
        }
    }
    return 0;
}