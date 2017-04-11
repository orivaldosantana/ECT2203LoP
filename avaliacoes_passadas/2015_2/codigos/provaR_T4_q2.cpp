#include <iostream>

using namespace std;

int main() {
    int v1, v2;
    int resto;
    
    cout << " Entre com dois números: ";
    cin >> v1 >> v2; 
    
    resto = v1 % v2; 
    cout << " Resultado: "; 
    if ( resto == 1)
        cout << v1 + v2 << endl; 
    else if ( resto == 2) {
        cout <<" " << v1; 
        if ((v1 % 2) == 0 )
            cout << " é par "; 
        else 
            cout << " é ímpar "; 
        cout <<"e " << v2; 
        if ((v2 % 2) == 0)
            cout << " é par. " << endl; 
        else 
            cout << " é ímpar. " << endl; 
       
    }
    else if ( resto == 3 ) 
        cout << (v1 + v2)*v1 << endl; 
    else if ( resto == 4 ) {
        if (v2 != 0 )
            cout << (v1 + v2)/v2 << endl; 
    }
    else 
        cout << v1*v1 << " e " << v2*v2 << endl; 
           
     
}
