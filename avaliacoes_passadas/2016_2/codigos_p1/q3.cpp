#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
	int opcao = -1; 
	float l1, l2, raio, base, altura;
	float area;  
	
	while (opcao != 0) {
		cout << " 0 - Sair " << endl; 
		cout << " 1 - Calcular a área de um retângulo " << endl;
		cout << " 2 - Calcular a área de um círculo " << endl;
		cout << " 3 - Calcular a área de um triângulo " << endl << " >";
		cin >> opcao; 
		while ( opcao < 0 || opcao > 3) {
			cout << " Opção inválida, digite novamente: "; 
			cin >> opcao; 
		}
		if (opcao == 1) {
			cout << " Entre com os dois lados do retângulo: "; 
			cin >> l1 >> l2; 
			area = l1 * l2; 
		}
		if (opcao == 2) {
			cout << " Entre com o raio círculo: ";
			cin >> raio; 
			area = pow(raio,2)*M_PI; 
		}
		if (opcao == 3) {
			cout << " Entre com a base e a altura do triângulo: "; 
			cin >> base >> altura; 
			area = (base*altura)/2;
		}
		if (opcao != 0) 
			cout << " A área é: " << area << endl; 
	}
	
}
