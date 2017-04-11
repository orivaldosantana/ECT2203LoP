#include <iostream>

using namespace std;

int main() {
	char resposta = 'S'; 
	float quantidadeMercadoria, valorMercadoria; 
	float contValor = 0; 
	float contQuantidade = 0;
	int contTipos = 0;  
	
	while (resposta != 'N') {
		cout << " Entre com a quantidade de mercadoria: " ; 
		cin >> quantidadeMercadoria; 
		contQuantidade = contQuantidade + quantidadeMercadoria; 
		cout << " Entre com o seu valor: "  ; 
		cin >> valorMercadoria; 
		contValor = contValor + valorMercadoria*quantidadeMercadoria;
		contTipos = contTipos + 1; 
		cout << " Deseja informar mais mercadorias?(S/N) "; 
		cin >> resposta;  
	}
	cout << " Valor de todas as mercadorias: " << contValor << endl; 
	cout << " Quantidade de todas as contQuantidade: " << contQuantidade << endl;
	cout << " Quantidade de tipos: " << contTipos << endl;
	cout << " Méida do valor das mercadorias: " << contValor/contQuantidade << endl; 
	
}
