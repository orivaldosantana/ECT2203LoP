#include <iostream>

using namespace std;

int main()
{
	int diasDoAno = 365;
	int diasMenorQueMedia = 0; 
	float dias[diasDoAno]; 
	float menorTemperatura = 10000; 
	float maiorTemperatura = -10000; 
	float media = 0; 
	
	for (int i=0; i < diasDoAno; i++) {
		// lê e armazena a temperatura média de cada dia do ano
		cout << " Entre com a temperatura média do dia "<< i+1 <<" do ano: ";
		cin >> dias[i]; 
		// menor temperatura 
		if ( dias[i] < menorTemperatura ){
			menorTemperatura = dias[i]; 
		}
		// maior temperatura 
		if ( dias[i] > maiorTemperatura ){
			maiorTemperatura = dias[i]; 
		}
		// acumulador para media 
		media = media + dias[i]; 
	}
	media = media / diasDoAno; 
	// quantidade de dias com temperatura menor que a média 
	for (int i=0; i < diasDoAno; i++) {
		if (dias[i] < media)
			diasMenorQueMedia++; 
	}	
	cout << " A maior temperatura foi: " << maiorTemperatura << endl; 
	cout << " A menor temperatura foi: " << menorTemperatura << endl;  
	cout << " A temperatura média anual foi: " << media << endl; 
	cout << " Dias com temperatura menor que a média: " << diasMenorQueMedia << endl; 
}
