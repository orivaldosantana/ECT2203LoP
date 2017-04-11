#include <iostream>

using namespace std;

int main()
{
	float n1, n2; 
	cout << " Entre com dois números: "; 
	cin >> n1 >> n2; 
	
	cout << " Diferença absoluta: ";  
	if ( n1 > n2 ) 
		cout << n1 - n2; 
	else 
		cout << n2 - n1; 
}
