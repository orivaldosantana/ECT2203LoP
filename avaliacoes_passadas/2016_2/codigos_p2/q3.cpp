#include <iostream>

/*
Pontuação:
 - 0.4 pela validação da entrada
 - 0.8 pelo calculo do fatorial
 - 0.8 pelo uso de repetição aninhada
*/

using namespace std;

int main()
{
	int q, n, fat;
	for (int i=1; i <= q; i++) {
		cout << " Entre com o número "<<i<<": ";
		cin >> n;
		while ( n < 1 || n > 100) {
			cout << " Entre com o número "<<i<<": ";
			cin >> n;
		}
		fat = 1;
		for (int j = 1; j <= n; j++) {
			fat = fat*j;
		}
		cout << " O fatorial de "<< n << " é " << fat << endl;
	}
}
