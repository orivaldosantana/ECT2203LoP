#include <iostream>

using namespace std;

int main()
{
	int n = 0; 
	cout << " Resposta sobre o significado da Vida, do Universo e de tudo mais. "<< endl; 
	cout << " Entre com um número: ";
	cin >> n;
	while ( n != 42) {
		cout << " Não é " << n << endl; 
		cout << " Entre com um número: ";
		cin >> n;
	}
}
