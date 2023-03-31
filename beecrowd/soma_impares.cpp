#include <iostream>
 
using namespace std;
 
int main() {
    int x, y, soma;
    soma = 0;
    cin >> y >> x;
    
    for(int i = x+1; i < y; i++){
        if(i%2 != 0){
            soma += i;
        }       
    }
    cout << soma << endl;
 
    return 0;
}