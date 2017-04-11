#include <iostream>
#include <cmath>
#include <iomanip>  


using namespace std;
 
int main() {
 
	int tam = 4;
	float media[tam], nota1[tam], nota2[tam], nota3[tam], frequencia[tam];
	float maiorMedia = -1; 
	float contFreq = 0; 
	int contAprovados = 0; 
	int situacao[tam] = {}; 
	
	for (int i = 0; i < tam; i++) {
		cout << " Entre com a nota 1: "; 
		cin >> nota1[i]; 
		cout << " Entre com a nota 2: "; 
		cin >> nota2[i];
		cout << " Entre com a nota 3: "; 
		cin >> nota3[i];
		cout << " Entre com a frequência: "; 
		cin >> frequencia[i];
		media[i] = (nota1[i]+nota2[i]+nota3[i])/3;
		if (media[i] > maiorMedia)
			maiorMedia = media[i]; 
	}
	for (int i = 0; i < tam; i++) {
		if ( frequencia[i] < 90*0.75 ) // nenor que 25% 
			situacao[i] = 2; // 2 - reprovado por falta
		else {
			if (( media[i] >= 7) || ( media[i] >= 5 && nota1[i] >= 3 && nota2[i] >= 3 && nota3[i] >= 3))
				situacao[i] = 1; // 1 - aprovado
			else if ( media[i] < 3 )
				situacao[i] = 4; // reprovado por nota; 
			else if ( media[i] >= 3) 
				situacao[i] = 3; // reposição; 
		}
	}
	cout << " Freq. Nota Situação " << endl; 
	for ( int i = 0; i < tam; i++) {
		cout << fixed << setprecision(2) << (frequencia[i]*100)/90 << " " << media[i] << " "; 
		if ( situacao[i] == 1) { 
			cout << "aprovado";
			contAprovados++; 
		}
		if ( situacao[i] == 2) { 
			cout << "reprovado por falta";
			contFreq++; 
		}
		if ( situacao[i] == 3) 
			cout << "reposição";
		if ( situacao[i] == 4) 
			cout << "reprovado por nota";
		cout << endl; 
	}
	cout << " Maior média é : " << maiorMedia << endl; 
	cout << " A quantidade de alunos aprovados: " << contAprovados << endl; 
	cout << " Porcentagem dos alunos reprovados por frequência: " << (contFreq/float(tam))*100 << endl; 
  
    return 0;
}
