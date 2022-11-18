#include <iostream>
using namespace std;

int main(){
    
    int notas[3];


    for (int i = 0; i < 3; i++) {
        cout << "Digite o valor da nota " << i+1 << ": ";
        cin >> notas[i];
    }
    
    for(int i =0; i < 3; i++) {
        cout << "Nota " << i+1 << " digitada: " << notas[i] << "\n";
    }
    
    int media = (notas[0] + notas[1] + notas[2])/3;
    
    cout << "A média das notas é " << media << "\n";
    
    if (media >= 6) {
        cout << "Aluno aprovado!";
    }
    
    if (media < 6) {
        cout << "Aluno reprovado!";
    }
    
    
}
