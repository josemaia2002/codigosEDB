#include <iostream>
#include <algorithm>
#include <string>

 
using namespace std;

void sort(string S){
  for(int i = 0; i < S.length()-1; i++){  
    int min_idx = i;    
    for(int j = i+1; j < S.length(); j++){
      if(int(S[j]) < int(S[min_idx])){
        min_idx = j;
      }
    }
    swap(S[i], S[min_idx]);
  }
  cout << S << endl;
}

int main() {
  string entrada;
  getline(cin, entrada);
  sort(entrada);

  return 0;
}