#include <iostream>
#include <algorithm>
#include <string>
#include <map> 

using namespace std;

string sort(string S){
  for(int i = 0; i < S.length()-1; i++){  
    int min_idx = i;    
    for(int j = i+1; j < S.length(); j++){
      if(int(S[j]) < int(S[min_idx])){
        min_idx = j;
      }
    }
    swap(S[i], S[min_idx]);
  }
  return S;
}

int main(){
    string entrada, saida;
    char C;
    std::map<int,int> m;
    std::map<int,int>::iterator itr;  

    while(getline(cin, entrada)){
        saida = sort(entrada);
        for(int i = 0; i < saida.length(); i++){
            itr = m.find(int(saida[i]));

            if(itr != m.end())
                itr->second += 1;
            else
                m.insert(std::pair<int,int>(int(saida[i]), 1));
        }
        for(itr = m.begin(); itr != m.end(); ++itr){
            cout << itr->first << " " <<itr->second << endl;      
        }
        m.clear();
    }

    return 0;
}