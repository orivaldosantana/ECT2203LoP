#include <iostream>

using namespace std;

int main() {
	float brancos, nulos, validos, eleitores; 
	cout << " Entre com o total de eleitores: "; 
	cin >> eleitores; 
	cout << " Entre com o total de votos brancos, nulos e validos: ";
	cin >> brancos >> nulos >> validos; 
	cout << " Porcentagem de brancos: " << 100*(brancos/eleitores) << endl; 
	cout << " Porcentagem de nulos: " << 100*(nulos/eleitores) << endl; 
	cout << " Porcentagem de validos: " << 100*(validos/eleitores) << endl; 	
}
