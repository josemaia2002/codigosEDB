#include <iostream>
#include <algorithm>
 
using namespace std;

void sort(int a[], size_t len){
  for(int i = 0; i < len-1; i++){  
    int min_idx = i;    
    for(int j = i+1; j < len; j++){
      if(a[j] < a[min_idx]){
        min_idx = j;
      }
    }
    swap(a[i], a[min_idx]);
  }
  
}

int main() {
    size_t len = 3;
    int a[len], original[len];
    

    for(int i = 0; i < len; i++){
      cin >> a[i];
      original[i] = a[i];
    }

    sort(a, len);

    for(int i = 0; i < len; i++){
      cout << a[i] << endl;
    }

    cout << endl;

    for(int i = 0; i < len; i++){
      cout << original[i] << endl;
    }
    
 
    return 0;
}