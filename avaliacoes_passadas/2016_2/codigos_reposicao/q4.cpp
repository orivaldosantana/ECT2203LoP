#include <iostream>
#include <cmath>
#include <iomanip>  

/*
 * Faça um programa que leia um vetor A[100]. No final, mostre todas as 
 * posições do vetor que armazenam um valor menor ou igual a 10 e o 
 * valor armazenado em cada uma das posições.
 */
 
using namespace std;
 
int main() {
 
     int tam = 3; 
     float A[tam];
     for (int i; i < tam; i++) {
		 cin>> A[i];
	 }
	 for (int i; i < tam; i++) {
		 if ( A[i] <= 10)  
			 cout << "A["<<i<<"] = "<< fixed << setprecision(1) << A[i] << endl; 
	 }  
     
    return 0;
}
