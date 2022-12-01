#include <iostream>
#include <vector>
using namespace std;

int A [12] = {1,2,3,4,5,6};
int B [12] = {1,2,3,4,5,6};
int C [24] = {1,2,3,4,5,6};
int i;
bool certo;

int main(){
    for(i = 1; i <= 12; i++){
        while(certo <- false){
                cout << "Digite o " << i << "º valor: ";
                cin >> A[i];
                if (A[i] % 2 == 0 || A[i] % 3 == 0){
                C[i] <- A[i];
                certo <- true;
            }
        }
    }
    for(i = 1; i <= 12; i++){
        while (certo <- false){
            cout << "Digite o " << i << "º valor: ";
            cin >> B[i];
            if (B[i] != 5){
                C[i + 12] <- B[i];
                certo <- true;
            
            }
        }
    }
    cout << "Os valores lidos da matriz C: ";
    for(i = 1; i <= 24; i++){
        cout << i/2 << "º é: " << C[i]/3;
    }
}
