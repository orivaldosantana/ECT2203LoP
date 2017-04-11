#include <iostream>

using namespace std;

int main() {
	char sexo;
	char resposta;
	float contSim = 0;
	float contNao = 0;
	float contFemSim = 0;
	float contFem = 0;
	float contMas = 0;  
	float contMasNao = 0;
	float totalPessoas = 1000;   
    for (int i = 0; i < totalPessoas; i++ ) {
		cout << " Entre com o sexo (M ou F): "; 
		cin >> sexo;
		cout << " Entre com a resposta,  S para sim e N para não: " ;
		cin >> resposta; 
		if ( resposta == 'S')
			contSim++;
		if ( resposta == 'N')
			contNao++;
		if (sexo == 'M')
			contMas++;
		if (sexo == 'F')
			contFem++; 
		if ( (sexo == 'F') && (resposta == 'S') )
			contFemSim++;
		if ( (sexo == 'M') && (resposta == 'N') )
			contMasNao++;
	} 
	cout << " Número de pessoas que respoderam sim: " << contSim  << endl;
	cout << " Número de pessoas que respoderam nao: " << contNao  << endl;
	cout << " Porcentagem de pessoas do sexo feminino que respoderam sim: " << 100*(contFemSim/totalPessoas) << "% " << endl;
	cout << " Porcentagem de pessoas do sexo masculino que respoderam não: " << 100*(contMasNao/totalPessoas) << "% " << endl;
}


