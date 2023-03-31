#include <iostream>

using namespace std;

unsigned long long fibonacci(int n){
	unsigned long long v[61] = {0, 1, 1};

    if(n == 0){
        return 0;
    }
    if(n == 1 || n == 2){
    	return 1;
    }
    else  
    	for(int i = 3; i <= 60; i++)
    		v[i] = v[i-1] + v[i-2];

    	return v[n];
}

int main(){
	int qte_testes, numero, i;
	unsigned long long resultado;
	i = 0;

	cin >> qte_testes;

	while(i < qte_testes){
		cin >> numero;
		resultado = fibonacci(numero);
		cout << "Fib(" << numero <<") = "<< resultado << endl;
		i++;
	}

	return 0;
}