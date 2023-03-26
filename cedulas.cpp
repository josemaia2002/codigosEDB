#include <iostream>
 
using namespace std;
 
int main() {
    int dinheiro, valor_inicial;
    int cedula_100, cedula_50, cedula_20, cedula_10, cedula_5, cedula_2, cedula_1;
    cin >> dinheiro;
    valor_inicial = dinheiro;
    
    cedula_100 = dinheiro / 100;
    dinheiro = dinheiro - (100*cedula_100);
    cedula_50 = dinheiro / 50;
    dinheiro = dinheiro - (50*cedula_50);
    cedula_20 = dinheiro / 20;
    dinheiro = dinheiro - (20*cedula_20);
    cedula_10 = dinheiro / 10;
    dinheiro = dinheiro - (10*cedula_10);
    cedula_5 = dinheiro / 5;
    dinheiro = dinheiro - (5*cedula_5);
    cedula_2 = dinheiro / 2;
    dinheiro = dinheiro - (2*cedula_2);
    cedula_1 = dinheiro / 1;
    dinheiro = dinheiro - (1*cedula_1);

    cout << valor_inicial << endl;

    cout << cedula_100 << " nota(s) de R$ 100,00" << endl;
    cout << cedula_50 << " nota(s) de R$ 50,00" << endl;
    cout << cedula_20 << " nota(s) de R$ 20,00" << endl;
    cout << cedula_10 << " nota(s) de R$ 10,00" << endl;
    cout << cedula_5 << " nota(s) de R$ 5,00" << endl;
    cout << cedula_2 << " nota(s) de R$ 2,00" << endl;
    cout << cedula_1 << " nota(s) de R$ 1,00" << endl;
 
    return 0;
}