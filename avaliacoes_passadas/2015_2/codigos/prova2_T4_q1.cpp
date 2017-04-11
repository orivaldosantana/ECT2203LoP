#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int termos, i; 
	termos = -1;
	float a1, q;  
	while (termos < 1) // (a)
	{
		cout << " Entre com a quantidade de termos da PG: "; 
		cin >> termos; 
	}
	a1 = 0; 
	while (a1 == 0) 
	{
		cout << " Entre com o valor de a1: "; 
		cin >> a1; 
	} 
	q = 0; 
	while (q == 0)
	{
		cout << " Entre com o valor de q: ";
		cin >> q; 
	}
	for (i=1; i <= termos; i++)
	{
		cout << " Termo "<< i<<": " << a1*pow(q,i-1) << endl; 
	}
}
