#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float sum(float v[][12], size_t len){
	float soma = 0;
	int ctrl = 0;
	for(int i = len-1; i > 0; i--){
		for(int j = len-1; j > ctrl; j--)
			soma += v[i][j];
		ctrl++;
	}
	return soma;
}

int main(){
	size_t tam = 12;
	float M[12][12];
	char operacao;
	float media;
	float soma;
	float qte_elementos;
	qte_elementos = ((tam * tam) - tam)/2;

	cin >> operacao;

	for(int i = 0; i < tam; i++)
		for(int j = 0; j < tam; j++)
			cin >> M[i][j];

	if(operacao == 'S'){
		soma = sum(M, tam);
		//cout << soma << endl;
    cout << fixed << setprecision(1) << soma << endl;
	}
	else{
		soma = sum(M, tam);
		media = soma / qte_elementos;
		//cout << media << endl;
    cout << fixed << setprecision(1) << media << endl;
	}

	return 0;
}
  
/*
M
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
1
2
3
4
5
6
7
8
10
11
12
13
14
15
16
10
11
12
13
14
15
16
1
2
3
4
5
1
2
3
4
5
1
2
3
4
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
1
2
3
4
5
6
7
8
10
11
12
13
14
15
16
10
11
12
13
14
15
16
1
2
3
4
5
1
2
3
4
5
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
1
2
3
4
5
6
7
8
5
6
7
8
9
10
11
12
13
14
15
16
1
2
3
4
5
6
7
8
*/