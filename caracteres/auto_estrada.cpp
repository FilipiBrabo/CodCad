#include <iostream>

using namespace std;

int main() {
  int tamanho, qtdPainel = 0;
  char c;
  cin >> tamanho;

  for (int i = tamanho; i > 0; i--) {
    cin >> c;
    switch (c) {
      case 'P':
        qtdPainel += 2;
        break;

      case 'C':
        qtdPainel += 2;
        break;

      case 'A':
        qtdPainel++;
        break;

      case 'D':
        break;

      default:
        break;
    }
  }

  cout << qtdPainel << endl;

}
