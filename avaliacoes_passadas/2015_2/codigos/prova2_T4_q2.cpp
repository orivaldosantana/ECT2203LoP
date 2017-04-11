#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int dimensao,i; 
	dimensao = -1;
	while (dimensao < 1) 
	{
		cout << " Entre com a dimensão dos vetores: "; 
		cin >> dimensao; 
	}
	float vetorA[dimensao];
	float vetorB[dimensao]; 
	float vetorC[dimensao]; 
	for (i=0; i<dimensao; i++) 
	{
		cout << " Entre com o elemento "<<i<<" do vetor A: ";
		cin >> vetorA[i];
	}
	for (i=0; i<dimensao; i++) 
	{
		cout << " Entre com o elemento "<<i<<" do vetor B: ";
		cin >> vetorB[i];
	}
	for (i=0; i<dimensao; i++) 
	{
		vetorC[i] = vetorA[i] - vetorB[i];
	}	
	cout << " Vetor C: " ;
	for (i=0; i<dimensao; i++) 
	{
		cout << vetorC[i] << " ";
	}	
	cout << endl; 
	float menorA = vetorA[0];
	float menorB = vetorB[0];
	for (i=1; i<dimensao; i++) 
	{
		if (vetorA[i] < menorA)
			menorA = vetorA[i];
		if (vetorB[i] < menorB)
			menorB = vetorB[i];
	}
	cout << " Menor elemento do vetor A é: " << menorA << endl; 
	cout << " Menor elemento do vetor B é: " << menorB << endl; 
	if (menorA < menorB) 
		cout << " O vetor A possui o menor elemento." << endl; 
	else if (menorB < menorA) 
		cout << " O vetor B possui o menor elemento." << endl; 
	float k; 
	cout << " Entre com o valor de k: ";
	cin >> k;
	for (i=1; i<dimensao; i++) 
	{ 
		vetorC[i] = vetorC[i] + k; 
	}
}
