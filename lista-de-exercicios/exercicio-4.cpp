// Ler um vetor com 10 elementos numéricos inteiros. Apresentar o total de elementos ímpares
// existentes no vetor e também o percentual do valor total de números ímpares em relação à
// quantidade total de elementos armazenados no vetor.

// Programa feito por Gustavo Medeiros Brasil para a matéria de Bases de Programação

#include <iostream>
using namespace std;

int main(int argc, char *argv[])

{
    int vec[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numPar = 0;
    int numImpar = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << vec[i] << endl;
        if (vec[i] % 2 == 0)
        {
            numPar++;
        }
    }
    numImpar = 10 - numPar;

    cout << "O total de números ímpares é: " << numImpar << "\n";
    cout << "A porcentagem de números ímpares é: " << 100 * numImpar / 10 << "%";
    return 0;
}