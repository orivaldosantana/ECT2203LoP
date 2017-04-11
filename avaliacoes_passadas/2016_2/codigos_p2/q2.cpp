#include <iostream>

using namespace std;

/*
Pontuação:
 - 1.0 construção do algorimto
 - 1.0 pela identificação de palindromo
*/
int main()
{
	int tam = 9;
	int v[tam], k;
	cout << " Entre com um número de "<<tam<<" dígitos: ";
	cin >> k;
	// Código para extrair os dígitos de um número e colocar em um vetor de inteiros
	for (int i = 0; i < tam; i++) {
		v[i] = k%10;
		k = k/10;
	}
	// mostra o número separado em dígitos
	for (int i = tam-1; i >= 0; i--) {
		cout << " " << v[i];
	}
	// verifica se é palindromo
	// - basta um dígito diferente considerando duas posições simétricas
	//   para que o número não seja palidromo
	bool palindromo = true;
	for (int i = 0; i < tam/2; i++) {
		if (v[i] != v[tam-i-1])
			palindromo = false;
	}
	if (palindromo)
		cout << " É Palíndromo" << endl;
	else
		cout << " Não é Palíndromo" << endl;

}
