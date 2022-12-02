// Ler 6 elementos (valores inteiros) para os vetores A e B. Construir os vetores C e D do
// mesmo tipo, sendo que o vetor C deve ser formado pelos elementos de índice ímpar dos
// vetores A e B, e o vetor D deve ser formado pelos elementos de índice par dos vetores A e B.
// Apresentar os vetores C e D.

// Programa feito por Gustavo Medeiros Brasil para a matéria de Bases de Programação

#include <iostream>

using namespace std;

int main() {

    int i, A[6]={}, B[6]={}, C[6]={}, D[6];
    int numImpar = 0, numPar = 0;
    
    for (i = 0; i < 6; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    
    for (i = 0; i < 6; i++) {
        cout << "B[" << i << "] = ";
        cin >> B[i];
    }
    
    for (i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            D[numPar] = A[i];
            numPar++;
        } else if (i % 2 == 1){
            C[numImpar] = A[i];
            numImpar++;
        }
    }
    
    for (i = 0; i < 6; i++) {
        if(i % 2 == 0){
            D[numPar] = B[i];
            numPar++;
        } else if (i % 2 == 1) {
            C[numImpar] = B[i];
            numImpar++;
        }
    }

    cout << "\n";
    cout << "A = [";
    for (int count = 0; count < 6; count++){
        cout << " " << A[count] << " ";
    }
    cout << "]";

    cout << "\n";
    cout << "B = [";
    for (int count = 0; count < 6; count++){
        cout << " " << B[count] << " ";
    }
    cout << "]";
        
    cout << "\n";
    cout << "C = [";
    for (int count = 0; count < 6; count ++){
        cout << " " << C[count] << " ";
    }
    cout << "]";
        
    cout << "\n";
    cout << "D = [";
    for (int count = 0; count < 6; count ++){
        cout << " " << D[count] << " ";
    }
    cout << "]";
}