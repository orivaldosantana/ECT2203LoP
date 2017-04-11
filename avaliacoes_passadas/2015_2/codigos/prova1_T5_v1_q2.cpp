 #include <iostream>
#include <cmath>

using namespace std;
/*
 * Inicialize os contadores
 * Inicialize o nível de escolaridade com um valor diferente de 5
 * Enquanto nivel de escolaridade for diferente de 5 faça
 * 		Leia o nível de escolaridade
 * 		se escolaridade diferente de 5 então
 * 			Valide o nível de escolaridade
 * 			se escolaridade igual a 0
 * 				incremente o contador do nível 0
 * 			se escolaridade igual a 1
 * 				incremente o contador do nível 1
 * 			se escolaridade igual a 2
 * 				incremente o contador do nível 2
 * 			se escolaridade igual a 3
 * 				incremente o contador do nível 3
 * 			incremente contador geral
 * Calcule a porcentagem de cada nível de escolaridade e mostre na tela
 * A porcentagem é o valor do contador do nível dividido pelo contador geral
 */


int main()
{
	float cont, cont0, cont1, cont2, cont3;
	int escolaridade;
	escolaridade = -1;
	cont = 0;
	cont0 = 0;
	cont1 = 0;
	cont2 = 0;
	cont3 = 0;
	while (escolaridade != 5)
	{
		cout << " Entre com o nível de escolaridade: ";
		cin >> escolaridade;
		if (escolaridade != 5 )
		{
			while ( escolaridade < 0 || escolaridade > 3)
			{
				cout << " Inválido. Entre com o nível de escolaridade: ";
				cin >> escolaridade;
			}
			if (escolaridade == 0)
				cont0++;
			if (escolaridade == 1)
				cont1 = cont1 + 1;
			if (escolaridade == 2)
				cont2 = cont2 + 1;
			if (escolaridade == 3)
				cont3 = cont3 + 1;
			cont = cont + 1;
		}
	}
	if (cont != 0)
	{
		cout << " Nunca Estudou " << 100*cont0/cont << endl;
		cout << " Fundamental incompleto ou completo " << 100*cont1/cont << endl;
		cout << " Ensino médio incompleto ou completo " << 100*cont2/cont << endl;
		cout << " Ensino superior incompleto ou completo " << 100*cont3/cont << endl;
	}
}
