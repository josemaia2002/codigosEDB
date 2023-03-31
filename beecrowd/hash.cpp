#include <iostream>
#include <string>

using namespace std;

int main() {
  string entrada;
  int N; // qte_casos
  int L; // qte_linhas
  int it = 0;
  cin >> N;

  int valor = 0, posicao_alpha, posicao = 0, elemento = 0;

  while(it < N){
    cin >> L;
    valor = 0;
    for(int i = 0; i < L; i++) {
      cin >> entrada;
      for(int j = 0; j < entrada.length(); j++) {
        posicao_alpha = int(entrada[j])-65;
        valor = valor + j + i + posicao_alpha;
      }
    }
    cout << valor << endl;
    it++;
  }

  return 0;
}