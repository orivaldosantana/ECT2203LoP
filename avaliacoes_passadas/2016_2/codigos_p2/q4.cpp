#include <iostream>

using namespace std;

int main()
{
	float qtHabitantes =1000;
	int filhos, contMenor = 0;
	float salario, somaSalario, maiorSalario;
	float somaFilhos; 
	for (int i=0; i < qtHabitantes; i++) {
		cout << " Entre com o número de filhos: "; 
		cin >> filhos; 
		cout << " Entre com o salários: "; 
		cin >> salario;
		// somatórios para calcular a média  
		somaFilhos = somaFilhos + filhos;
		somaSalario = somaSalario + salario;
		// encontrar o maior salário 
		if ( salario > maiorSalario) 
			maiorSalario = salario; 
		// contador de pessoas com salário menor que 1000,00 
		if ( salario < 1000 ) {
			contMenor++; 
		}
	}
	cout << " Média de salário da população: " << somaSalario/qtHabitantes << endl;
	cout << " Média do número de filhos: " << somaFilhos/qtHabitantes << endl; 
	cout << " Maior salário dos habitantes: " << maiorSalario << endl; 
	cout << " Percentual de pessoas com salário menor que R$ 1.000,00: " << (contMenor/qtHabitantes)*100 << "% " <<endl; 
	 
}
