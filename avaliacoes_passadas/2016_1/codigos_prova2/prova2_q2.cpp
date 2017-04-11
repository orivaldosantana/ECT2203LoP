#include <iostream>

using namespace std;

int main()
{
    float Q[20];
    float n; 
    float maiorN;
    int maiorI; 
    int i; 
    
    for (i =0; i <20; i++){
        n = -1;
         while (n < 0) {
            cout << "Entre com o elemento "<< i <<" do vetor: ";
            cin >> n;
        }
        Q[i] = n;    
    }
    maiorN = -1; 
    for (i = 0; i < 20; i++) {
        if (Q[i] > maiorN) {
            maiorN = Q[i];
            maiorI = i;
        }
    }
    cout << " O maior número é " << maiorN << " e o seu índice é "<< maiorI << endl; 
    
    

}
