// Elaborar um programa que efetue a leitura de 10 valores numéricos e apresente no final o
// somatório e a média dos valores lidos.

// Programa feito por Gustavo Medeiros Brasil para a matéria de Bases de Programação

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int x, i, media, soma = 0;

    for (i = 1; i <= 10; i++){
        cout << "Digite um numero: \n";
        cin >> x;
        soma = soma + x;
        media = soma/10;
    };
    cout << "O valor da soma dos números é: \n" << soma << "\n";
    cout << "O valor da média desses números é: \n" << media;
}