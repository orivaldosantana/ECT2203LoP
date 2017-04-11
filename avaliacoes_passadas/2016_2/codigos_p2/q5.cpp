#include <iostream>

using namespace std;

/*
Pontuação:
 - 0.5 preecher os vetores
 - 0.8 adicionar os vetores no vetor resultante
 - 0.7 adicionar sem repetição
 - 0.5 mostar o vetor resultante
*/

int main()
{
	int tam = 5, tamR = 0;
	int vr[2*tam], v1[tam], v2[tam];

	for (int i = 0; i < tam; i++) {
		// preenche cada posição i do vetor 1
		cout << " Entre com o v1["<<i<<"]: ";
		cin >> v1[i];
		// verifica se o elemento i do vetor 1 existe no vetor resultante
		bool repeticao = false;
		for (int j = 0; j < tamR; j++) {
			if (v1[i] == vr[j]) {
				repeticao = true; // observe que a variavel 'repeticao' só é alterada para 'true'
			}
		}
		if ( ! repeticao) {
			vr[tamR] = v1[i];
			tamR++;
		}
	}
	// a mesma lógica aplicada no vetor 1
	for (int i = 0; i < tam; i++) {
		cout << " Entre com o v2["<<i<<"]: ";
		cin >> v2[i];
		bool repeticao = false;
		for (int j = 0; j < tamR; j++) {
			if (v2[i] == vr[j]) {
				repeticao = true;
			}
		}
		if ( ! repeticao) {
			vr[tamR] = v2[i];
			tamR++;
		}
	}
	// mostra os elementos do vetor resultante
	for (int i=0; i < tamR; i++) {
		cout << " " << vr[i];
	}
	cout << endl;
}
