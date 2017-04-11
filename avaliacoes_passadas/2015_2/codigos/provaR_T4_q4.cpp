#include <iostream>

using namespace std;

int main() {
	int totalAlunos = 2; 
	int matriculas[totalAlunos];
	float medias[totalAlunos];
	float frequencias[totalAlunos];
	float maiorN = -1;
	float menorN = 11; 
	float n1, n2, n3; 
	float soma = 0; 
	int aprovados = 0; 
	float freqInsuficiente = 0;
	bool reprovado = true;  
	bool situacao[totalAlunos]; 
    for (int a=0; a < totalAlunos; a++) {
		reprovado = true; 
		cout << " Entre com o número de matricula: "; 
		cin >> matriculas[a]; 
		float f; 
		cout << " Entre com a frequência: ";
		cin >> f; 
		frequencias[a] = f/90.0; 
		cout << " Entre com as três notas do aluno: "; 
		cin >> n1 >> n2 >> n3; 
		medias[a] = (n1+n2+n3)/3.0;
		soma = soma + medias[a];  
		cout << " A nota final é " << medias[a] << endl;
		// Maior média e menor média 
		if ( medias[a] > maiorN )
		{
			maiorN = medias[a]; 
		}
		if ( medias[a] < menorN )
		{
			menorN = medias[a]; 
		}
		// Alunos Reprovados
		if (frequencias[a] > 0.75 )
		{
			if ( medias[a] >= 7.0 )
			{
				aprovados++;
				reprovado = false; 
			} 
			else if ((medias[a] >= 5.0) && ( ( n1 > 3.0 ) && ( n2 > 3.0 ) && ( n3 > 3.0 ) ))
			{
				aprovados++;
				reprovado = false;
			}
		} 
		else // Alunos reprovados por frequências insuficiênte 
			freqInsuficiente++;
		situacao[a] = reprovado; 
	}
	cout << endl << " A maior média foi " << maiorN << endl; 
	cout << " A menor méida foi " << menorN << endl;
	cout << " A média da turma foi : " << soma/totalAlunos << endl;  
	cout << " Total de alunos reprovados: " << 100*(totalAlunos - aprovados)/totalAlunos << "%" << endl; 
	cout << " Total de alunos reprovados por frequência insuficiente: " << 100*freqInsuficiente/totalAlunos << "%" << endl;
	
	for (int a=0; a < totalAlunos; a++) 
	{
		cout << matriculas[a] << " " << frequencias[a] << " " << medias[a]; 
		if ( situacao[a] )
			cout << " Reprovado.";
		else 
			cout << " Aprovado.";
		cout << endl; 
	}
	
	           
}
