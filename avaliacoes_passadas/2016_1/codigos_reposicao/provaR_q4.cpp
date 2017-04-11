#include <iostream>

using namespace std;

int main() {
	float fat = 1; 
	float n;  
	while(n <= 0) {
		cout << " Entre com um número: "; 
		cin >> n; 
	}
	int cont = n; 
	while ( cont > 0 ) {
		fat = fat*cont; 
		cont = cont -1; 
	}
	cout << " O fatorial é " << fat; 
}
