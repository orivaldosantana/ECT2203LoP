#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	float precoTablet;
	float qtMes, qtTotal;
	float maiorVenda = 0;
	int contVendas = 0;
	int maiorMes;
	qtTotal = 0;
	cout << " Entre com o preço da unidade do tablet: ";
	cin >> precoTablet;
	while ( precoTablet < 0 )
	{
		cout << " Erro. Digite um valor válido: ";
		cin >> precoTablet;
	}
	for (int m=1; m <= 12; m++)
	{
		cout << " Entre com a quantidade de tablets vendidas no mês "<< m <<": ";
		cin >> qtMes;
		if (qtMes > maiorVenda)
		{
			maiorVenda = qtMes;
			maiorMes = m;
		}
		qtTotal = qtTotal + qtMes;
		if (qtMes*precoTablet > 100000.0)
		{
			contVendas++;
		}
	}
	cout << " O mês de maior venda foi o mês "
	     << maiorMes <<" e o valor de vendas foi: "<< maiorVenda*precoTablet<<"."<<endl;
	cout << " O total de vendas no ano foi "
	     << qtTotal*precoTablet<<"."<<endl;
	cout << " A quantidade de meses com vendas maiores que 100.000,00 foi "
	     << contVendas << "."<<endl;
}
