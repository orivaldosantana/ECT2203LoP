#include <iostream>

using namespace std;

int main() {
    float salario, financiamento; 
    
    cout << " Entre com o salário e o financiamento prentendido: " << endl; 
    cin >> salario >> financiamento; 
    
    if (financiamento <= 5*salario) 
        cout << " Financiamento concedido." << endl; 
    else 
        cout << " Financiamento negado." << endl; 
    cout << " Obrigado por nos consultar." << endl; 
}
