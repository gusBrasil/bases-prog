// Elaborar um programa que apresente como resultado o valor de uma potência de uma base
// qualquer elevada a um expoente qualquer, ou seja, de BE, em que B é o valor da base e E o
// valor do expoente. Considere apenas a entrada de valores inteiros positivos. Não utilize o
// formato “base  expoente”. Use para a solução deste problema a técnica de loop com o
// conceito acumulador / contador.

// Programa feito por Gustavo Medeiros Brasil para a matéria de bases de programação

#include <iostream>
using namespace std;

int B = 0, E = 0, i = 0, resultado = 0;

int main() {
    cout << "Determine o valor da base: "; cin >> B;
    cout << "\nDetermine o valor do expoente: "; cin >> E;

    for (i = 1; i <= E; i++){
        resultado = resultado * B;
    }

    cout << "A resposta é: " << resultado;
}
