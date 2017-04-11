#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float media;
	char conceito = ' ';
	 
	
	cout << " Entre com a média: "; 
	cin >> media; 
	
	if (media > 9 && media <= 10)
		conceito = 'A'; 
	else if (media > 7.5)
		conceito = 'B';
	else if (media > 6.0) 
		conceito = 'C'; 
	else if (media > 4)
		conceito = 'D';
	else if (media >= 0)
		conceito = 'E';
	cout << " O conceio foi " << conceito << endl; 
		
	if (conceito == 'A' || conceito == 'B' || conceito == 'C')
		cout << "APROVADO" << endl; 
	if (conceito == 'D' || conceito == 'E')
		cout << "REPROVADO" << endl; 
}
