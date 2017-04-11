#include <iostream>

using namespace std;

int main()
{
    int m,n; 
    m = -1; 
    n = -1; 
    while (m < 0) {
        cout << "Entre com a quantidade de múltiplos: ";
        cin >> m;
    }
    while (n < 0) {
        cout << "Entre com um número: ";
        cin >> n;
    }
    cout << "Multiplos:";
    for (int i =0; i < m; i++) {
        cout << " " << i*n; 
    }

}
