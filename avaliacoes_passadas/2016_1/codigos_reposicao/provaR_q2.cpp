#include <iostream>

using namespace std;

int main() {
	float quantidade; 
	cout << " Entre com a quantidade de maças compradas: "; 
	cin >> quantidade; 
	cout << " Custo: "; 
	if (quantidade < 12 ) 
		cout << quantidade * 1.30; 
	else 
		cout << quantidade * 1.00; 

}
