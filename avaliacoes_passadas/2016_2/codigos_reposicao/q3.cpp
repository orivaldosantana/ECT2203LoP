#include <iostream>
#include <cmath>
#include <iomanip>  

/*
 * Leia um conjunto não determinado de pares de valores M e N (parar 
 * quando algum dos valores for menor ou igual a zero). Para cada par 
 * lido, mostre a sequência do menor até o maior e a soma dos inteiros 
 * consecutivos entre eles (incluindo o N e M).
 * 
 * Critérios:
 *  - 0.5 por detectar o menor e o maior
 *  - 0.5 para repetição principal 
 *  - 0.5 por mostrar os números entre N e M
 *  - 0.5 por realizar a soma e mostrar 
 */
 
using namespace std;
 
int main() {

	int m, n, maior, menor, soma=0; 
	cin >> m >> n; 
	while ( m > 0 && n > 0 ) {
		soma = 0; 
		if (m > n) {
			maior = m;
			menor = n;
		}
		else {
			maior = n; 
			menor = m; 
		}
		for (int i=menor; i <=  maior; i++) {
			cout << i << " "; 
			soma = soma + i; 
		} 
		cout << "Sum=" << soma << endl; 
		cin >> m >> n; 
	}
    return 0;
}
