#include <iostream>

using namespace std;
// 0.5 entrada/saída 
// 2.0 if-else ou operadores lógicos 
int main() {
	float anoNascimento, anoIngeresso, idade, tempoTrabalho; 
	cout << " Entre com o ano de nascimento e o ano de ingresso na empresa: ";
	cin >> anoNascimento >> anoIngeresso; 
	idade = 2016 - anoNascimento; 
	tempoTrabalho = 2016 - anoIngeresso; 
	cout << " Idade: " << idade << endl; 
	cout << " Tempo de Trabalho: " << tempoTrabalho << endl; 
	if ( idade >= 65 )
		cout << " Requerer aposentadoria " << endl; 
	else if ( tempoTrabalho >= 30 )
		cout << " Requerer aposentadoria " << endl; 
	else if ( idade >= 60 && tempoTrabalho >= 25) 
		cout << " Requerer aposentadoria " << endl; 
	else 
		cout << " Não Requerer " << endl; 
}
