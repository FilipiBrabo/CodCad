#include <iostream>
#include <algorithm>

using namespace std;

struct Pais {
    int id;
    int ouro   = 0;
    int prata  = 0;
    int bronze = 0;
};

bool comparaPais(Pais a, Pais b) {
    if (a.ouro != b.ouro) {
        return a.ouro > b.ouro;
    } else if (a.prata != b.prata) {
        return a.prata > b.prata;
    } else if (a.bronze != b.bronze){
        return a.bronze > b.bronze;
    } else {
        return a.id < b.id;
    }
}

int main(void) {

    int n, m;
    cin >> n;
    cin >> m;

    Pais paises[n];

    //Inicializaçao dos ids
    for (int i=0; i<n; i++) {
        paises[i].id=i+1;
    }

    // Leitura
    for (int i=0; i < m; i++) {
        int o, p, b;
        cin >> o >> p >> b;
        paises[o-1].ouro++;
        paises[p-1].prata++;
        paises[b-1].bronze++;
    }

    sort(paises, paises+n, comparaPais);

    for (int i=0; i<n; i++) {
        cout << paises[i].id << " ";
    }
    return 0;
}