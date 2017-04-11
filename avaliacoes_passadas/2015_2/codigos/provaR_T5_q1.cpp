#include <iostream>

using namespace std;

int main() {
    int n; 
    
    cout << " Entre com um número: "; 
    cin >> n; 
    if ( n > 0 ) {
		if ( (n % 2) == 0 )
			cout << " Número par." << endl; 
		else 
			cout << " Número impar." << endl; 
	}
	else if ( n < 0 )
		cout << " Número negativo." << endl; 
}
