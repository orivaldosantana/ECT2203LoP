#include <iostream>

using namespace std;

int main() {
    float indice; 
    
    cout << " Entre com o índice de poluição medido: "; 
    cin >> indice; 
    
    if (indice > 0.25)
    {
		if (indice <= 0.3) 
			cout << " As industrias do primeiro grupo devem suspeder suas atividades. " << endl; 
		else if (indice <= 0.4 )  
			cout << " As industrias do primeiro e do segundo grupo devem suspeder suas atividades. " << endl; 
		else if (indice <= 0.5 )  
			cout << " As industrias do primeiro, do segundo e do terceiro grupo devem suspeder suas atividades. " << endl; 
	} 
}
