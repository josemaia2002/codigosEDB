#include <iostream>
#include <iomanip>

#define COMISSAO 0.15
 
using namespace std;
 
int main() {
    string nome;
    double salario, vendas, remuneracao;
    
    getline(cin, nome);
    cin >> salario >> vendas;
    
    remuneracao = salario + (vendas*COMISSAO);
    
    cout << "TOTAL = R$ " << fixed << setprecision(2) << remuneracao << endl;
 
    return 0;
}