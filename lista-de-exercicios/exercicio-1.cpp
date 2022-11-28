// Elaborar um programa que apresente como resultado o valor de uma potência de uma base
// qualquer elevada a um expoente qualquer, ou seja, de BE, em que B é o valor da base e E o
// valor do expoente. Considere apenas a entrada de valores inteiros positivos. Não utilize o
// formato “base  expoente”. Use para a solução deste problema a técnica de loop com o
// conceito acumulador / contador.

#include <iostream>
using namespace std;

int B, E;

int main() {
    cout << "Insira o valor base: " << "\n"; cin >> B;
    cout << "Insira o valor expoente: " << "\n"; cin >> E;
    int resultado = B^E;
    cout << resultado;
}