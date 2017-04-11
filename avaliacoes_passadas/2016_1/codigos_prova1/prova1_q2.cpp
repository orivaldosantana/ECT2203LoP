#include <iostream>

using namespace std;

// 1.0 entrada/saída 
// 1.5 estrutura condicional 
int main() {
	float horasMes, valorHora, salarioMes;
	cout << " Entre com as horas trabalhadas em um mês: ";
	cin >> horasMes;
	cout << " Entre com o valor do salário por hora: ";
	cin >> valorHora;
	if (horasMes <= 160){
		salarioMes = horasMes * valorHora;
	}
	if ( horasMes > 160){
		salarioMes = 160 * valorHora + (horasMes - 160)*(valorHora*1.5);
	}
	cout << " O valor do salário é: " << salarioMes << endl;
}
