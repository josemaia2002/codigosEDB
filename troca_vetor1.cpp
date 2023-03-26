#include <iostream>

using namespace std;

void swap(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void print_array(int v[], size_t len){
	for(int i = 0; i < len; i++)
		cout << "N[" << i << "] = " << v[i] << endl;
}

int main(){
	size_t len = 20;
	int arr[len];
	int i = 0;
	int j = len-1;

	for(i = 0; i < len; i++)
		cin >> arr[i];

	for(i = 0; i < len/2; i++){
		swap(arr[i], arr[j]);
		j --;
	}
	print_array(arr, len);

	return 0;
}