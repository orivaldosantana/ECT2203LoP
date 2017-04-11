#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int n; 
	cout << " Entre com o valor de n: ";
	cin >> n;
	while ( n < 1) 
	{
		cout << " Valor inválido, digite novamente: ";
		cin >> n; 
	} 
	float v[n];
	float u[n]; 
	for (int i=0; i<n; i++)
	{
		cout << " Entre com o elemento da posição "<<i<<" do vetor u: ";
		cin >> u[i];
	}
	for (int i=0; i<n; i++)
	{
		cout << " Entre com o elemento da posição "<<i<<" do vetor v: ";
		cin >> v[i];
	}
	float produtoInterno=0; 
	for (int i=0; i<n; i++)
	{
		produtoInterno = produtoInterno + u[i]*v[i];
	}
	cout << " O valor do produto interno é "<<produtoInterno<<endl;
}
