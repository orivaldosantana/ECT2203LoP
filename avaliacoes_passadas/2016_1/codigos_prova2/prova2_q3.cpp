#include <iostream>

using namespace std;

int main()
{
	int contador = 0; 
	int V1[15],V2[15]; 
	
	for (int i=0; i < 15; i++) {
		cout << " Entre com o elemento " << i << " de V1: "; 
		cin >> V1[i]; 
		cout << " Entre com o elemento " << i << " de V2: "; 
		cin >> V2[i]; 
	}
	for (int i=0; i < 15; i++) {
		if (V1[i] == V2[i])
			contador++; 
	}
	cout << " V1 e V2 possuem: " << contador << " nas mesas possições." << endl; 

}
