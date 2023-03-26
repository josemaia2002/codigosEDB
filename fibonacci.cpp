#include <iostream>

using namespace std;

int fibonacci(int n){
    if(n == 0)
        return 0;
    if(n == 1 || n == 2)
    	return 1;
    else    
        return (fibonacci(n-1) + fibonacci(n-2));    
}

int main(){
	int qte_testes, numero, i, resultado;
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