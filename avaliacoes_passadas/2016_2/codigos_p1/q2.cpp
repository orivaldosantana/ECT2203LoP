#include <iostream>

using namespace std;

int main()
{
	int n, cont; 
	cout << " Entre com um número inteiro: "; 
	cin >> n; 
	
	cout << " Divisores impares menores que 100: ";  
	cont = 0;
	while ( cont < n && cont < 100) {
		cont++; 
		if ( n % cont == 0 && cont % 2 == 1) 
			cout << cont << " "; 
	}
}
