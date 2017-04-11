#include <iostream>

using namespace std;

int main() {
    float c; 
    
    cout << " C e F" << endl; 
    for (float f = 40; f <= 150; f=f+2) {
        c = (f-32)*5/9;
        cout << f << " " << c << endl; 
        
    }
           
}
