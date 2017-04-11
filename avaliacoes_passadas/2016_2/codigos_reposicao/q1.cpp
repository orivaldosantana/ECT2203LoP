#include <iostream>
#include <cmath>
#include <iomanip>  


 
using namespace std;
 
int main() {
    float base, altura, area;
    cout << "Entre com a base: ";
    cin >> base; 
    cout >> "Entre com a altura: "; 
    cin >> altura; 
    area = (base*altura)/2;
    cout << "Área do triângulo: " << area << endl; 
    return 0;
}
