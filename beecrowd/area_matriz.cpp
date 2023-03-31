#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double sum(double v[][12], size_t len){
	double soma = 0;
	int ctrl_lo, ctrl_upper;
	ctrl_lo = 1;
	ctrl_upper = 11;
	for(int i = 0; i < 5; i++){
		for(int j = ctrl_lo; j < ctrl_upper; j++)
			soma += v[i][j];
		ctrl_lo++;
		ctrl_upper--;
	}
	return soma;
}

int main(){
	size_t tam = 12;
	double M[12][12];
	char operacao;
	double media;
	double soma;
	double qte_elementos;
	qte_elementos = 30;

	cin >> operacao;

	for(int i = 0; i < tam; i++)
		for(int j = 0; j < tam; j++)
			cin >> M[i][j];

	if(operacao == 'S'){
		soma = sum(M, tam);
    cout << fixed << setprecision(1) << soma << endl;
	}
	else{
		soma = sum(M, tam);
		media = soma / qte_elementos;
    cout << fixed << setprecision(1) << media << endl;
	}

	return 0;
}