#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <map> 
#include <vector>

using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b){
  if(a.second < b.second)
    return 1;
  else if(a.second == b.second)
    if(a.first > b.first)
      return 1;
    else
      return 0;
  else
    return 0;
}

void sort(map<int, int>& M){
  vector<pair<int, int> > A; // STD SORT

  for (auto& it : M) 
    A.push_back(it);

  sort(A.begin(), A.end(), cmp); 

  for (auto& it : A) 
    cout << it.first << ' ' << it.second << endl;
  //cout << endl;
}

string sort_string(string S){
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

  getline(cin, entrada);
  saida = sort_string(entrada);
  for(int i = 0; i < saida.length(); i++){
    itr = m.find(int(saida[i]));

    if(itr != m.end())
      itr->second += 1;
    else
      m.insert(std::pair<int,int>(int(saida[i]), 1));
  }
  sort(m);
  m.clear();
  
  while(getline(cin, entrada)){
    saida = sort_string(entrada);
    for(int i = 0; i < saida.length(); i++){
      itr = m.find(int(saida[i]));

      if(itr != m.end())
        itr->second += 1;
      else
        m.insert(std::pair<int,int>(int(saida[i]), 1));
    }
    cout << endl;
    sort(m);
    m.clear();
  }

  return 0;
}