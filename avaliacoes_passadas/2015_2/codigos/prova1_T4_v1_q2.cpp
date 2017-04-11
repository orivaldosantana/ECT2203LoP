#include <iostream>
#include <cmath>

using namespace std;

/*
 Inicialize o lado com valor negativo diferente de -1
 enquanto lado diferente de -1 faça
	Leia o lado
	se lado diferente de -1 
		Leia e realize a validação do lado
		Leia e realize a validação da altura 
		Calcule a área total e mostre na tela 
		Calcule o volume e mostre na tela
		Incremente o contador 
 Mostre o valor final do contador
 */

int main(int argc, char **argv)
{
	float l, h, at, v, ab; 
	int cont; 
	
	cont = 0; 
	l = -2; 
	while (l != -1) 
	{
		cout << " Entre com o lado: "; 
		cin >> l; 
		if (l != -1 )
		{
			while ( l <= 0 )
			{
				cout << " Entre com o lado: ";
				cin >> l; 
			}
			h = -2;
			while (h <= 0)
			{
				cout << " Entre com a altura: ";
				cin >> h; 
			}
			ab = 6 * ((l * l * sqrt(3))/4);
			at = 6 * l * h + 2*ab; // At = Al + 2*Ab 
			cout << " A área total do prisma é " << at << endl;  
			v = ab * h;
			cout << " O volume do prisma é " << v << endl;  
			cont = cont + 1; 
		}
	}
	cout << " A quantidade de prismas calculados é " << cont << endl; 

}
