#include <iostream>

using namespace std;

int main() {
	int quantidade = 5; 
	long int codigos[quantidade]; 
	int estoque[quantidade];
	float precoCompra[quantidade];
	float precoVenda[quantidade];
	long int dataFabricacao[quantidade];
	long int dataValidade[quantidade]; 
 
	for (int i = 0; i < quantidade; i++ )
	{
		cout << " Entre com os dados abaixo do produto: " << endl << "  Código: "; 
		cin >> codigos[i];
		cout << "  Quantidade em estoque: "; 
		cin >>  estoque[i];
		cout << "  Preço de compra: ";
		cin >> precoCompra[i]; 
		cout << "  Preço de venda: ";
		cin >> precoVenda[i];
		cout << "  Data fabricação: "; 
		cin >> dataFabricacao[i];
		cout << "  Data validade: "; 
		cin >> dataValidade[i];		
	}
	float soma = 0; 
	// Encontrar o produto com maior e o produto com menor margem de lucro 
	int iMaiorLucro = 0; 
	int iMenorLucro = 0;
	float maiorMargem = precoVenda[0] - precoCompra[0]; 
	float menorMargem = precoVenda[0] - precoCompra[0]; 
	for (int i = 1; i < quantidade; i++ )
	{
		float margem = precoVenda[i] - precoCompra[i]; 
		if ( margem > maiorMargem  )
		{
			iMaiorLucro = i;
			maiorMargem = margem;
		}
		if ( margem < menorMargem  )
		{
			iMenorLucro = i;
			menorMargem = margem;
		}
		// soma do preço de venda
		soma = soma + precoVenda[i];
	}
	cout << " O produto com maior margem de lucro é: " << codigos[iMaiorLucro] << endl; 
	cout << " O produto com menor margem de lucro é: " << codigos[iMenorLucro] << endl; 
	
	float mediaPrecoVenda = soma / quantidade; 
	cout << " A média do preço de venda dos prudutos é: " << mediaPrecoVenda << endl; 

	cout << " Validade em janeiro de 2016: " << endl; 
	for (int i = 0; i < quantidade; i++ )
	{
		// mostrar o código e a data de validade de todos os produtos com 
		// validade em janeiro de 2016 (012016) 
		int mmaaaa = dataValidade[i]%1000000;
		if (mmaaaa == 12016)
		{
			cout << " " << codigos[i] << " " << dataValidade[i] << endl; 
		} 
	}
	cout << " Relatório (e): " << endl;
	for (int i = 0; i < quantidade; i++ )
	{
		cout << "   " << codigos[i] << "\t " << precoVenda[i] << "\t " << dataValidade[i] << endl; 
	}
	cout << " Relatório (f): " << endl;
	for (int i = 0; i < quantidade; i++ )
	{
		if ( estoque[i] < 10 )
		cout << "   "<< codigos[i] << "\t " << estoque[i] <<  endl; 
	}	
	

	
}


