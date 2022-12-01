#include <iostream>
#include <vector>
using namespace std;

int A [12];
int B [12];
int C [24];
int i;
bool certo;

int main(){
    i=1;
    do{
        cout << "Digite um valor para a posição " << i << "\n ";
        cin >> A[i];
        if (A[i] % 2 == 0 || A[i] % 3 == 0){
            i=i+1;
        }
        else {
            cout << "Valor inválido, tente novamente.";
        }
    }while (i<=12);
    
    i=1;
    
    while (i<=12){
        cout << "Digite um valor para a posição " << i << "\n ";
        cin >> B[i];
        if(B[i] % 5 != 0) {
            i = i+1;
        }
        else {
                cout << "Valor inválido, digite novamente.";
            }
    }
    
    for(i = 0; i < 12; i++) {
        C[i] = A[i];
        C[i+12] = B[i];
    }
	for(i=0; i<24; i++){
		cout << C[i] << "\n";
	}    
}
