#include <iostream>
#include <string>

using namespace std;

void hash_array(int linhas){
  int valor = 0, posicao_alpha, posicao = 0, elemento = 0;
  string S;
  cin >> linhas;
  for(int i = 0; i < linhas; i++) {
    getline(cin, S);
    for(int j = 0; j < S.length(); j++) {
      posicao_alpha = int(S[j])-65;
      valor = valor + j + i + posicao_alpha;
    }
  }
  cout << endl << valor << endl;
}

int main() {
  string entrada;
  int N; // qte_casos
  int L; // qte_linhas
  int it = 0;
  cin >> N;
  // cin >> L;

  int valor = 0, posicao_alpha, posicao = 0, elemento = 0;

  while(it < N){
    //cin >> L;
    hash_array(2);
    it++;
  }

  return 0;
}

/*

#include <iostream>
#include <string>

using namespace std;

void hash_array(int linhas){
  int valor = 0, posicao_alpha, posicao = 0, elemento = 0;
  string S;
  for(int i = 0; i < linhas; i++) {
    getline(cin, S);
    for(int j = 0; j < S.length(); j++) {
      posicao_alpha = int(S[j])-65;
      valor = valor + j + i + posicao_alpha;
    }
  }
  cout << endl << valor << endl;
}

int main() {
  string entrada;
  int N; // qte_casos
  int L; // qte_linhas
  int i = 0;
  cin >> N;

  while(i < N){
    cin >> L;
    hash_array(L);
    i++;
  }

  return 0;
}

/* 
ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/



ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/




