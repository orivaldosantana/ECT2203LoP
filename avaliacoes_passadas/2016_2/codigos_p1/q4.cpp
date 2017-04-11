#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
	int modalidade, totalAtletas;
	int contAtletismo = 0;
	int contCiclismo = 0;
	int contFutebol = 0;
	int contOutras = 0;
	 
	
	while (modalidade != 0) {
		cout << " Ecolha uma modalidade: " << endl; 
		cout << " 1 - Atletismo " << endl;
		cout << " 2 - Ciclismo " << endl;
		cout << " 3 - Futebol " << endl;
		cout << " 4 - Outras " << endl << " > ";
		cin >> modalidade; 
		while ( modalidade < 0 || modalidade > 4) {
			cout << " Modalidade inválida, digite novamente: "; 
			cin >> modalidade; 
		}
		if (modalidade == 1) 
			contAtletismo++;
		if (modalidade == 2)
			contCiclismo++;
		if (modalidade == 3)
			contFutebol++;
		if (modalidade == 4)
			contOutras++; 		
	}
	totalAtletas = contAtletismo + contCiclismo + contFutebol + contOutras; 
	cout << " Atletismo: " << contAtletismo << endl; 
	cout << " Ciclismo: " << contCiclismo << endl; 
	cout << " Futebol: " << contFutebol << endl; 
	cout << " Outras: " << contOutras << endl;
	cout << " Total Atletas: " << totalAtletas << endl;  
}
