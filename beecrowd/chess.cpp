#include <iostream> 
#include <cstdlib>

using namespace std;

int color(int linha, int coluna){
    if((abs(linha-coluna)%2)== 0)
        return 1;
    else
        return 0;   
}

int main() {
    int L, C, resultado;
    cin >> L >> C;
    resultado = color (L, C);
    cout << resultado << endl;

    return 0;
}