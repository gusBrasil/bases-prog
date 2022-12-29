// um programa em C++ que solicita ao usuario a digitação do dia, mês e ano do nascimento, informando quantos dias
// a pessoa viveu. Considerando anos de 365 e meses de 30 dias.

// Programa feito por Gustavo Medeiros Brasil para a matéria Bases de Programação
// Disponível também em: https://github.com/gusBrasil/bases-prog

#include <iostream>
using namespace std;

int dia, mes, ano;
int diaAtual = 8, mesAtual = 12, anoAtual = 2022;

int main()
{
    cout << "Digite seu dia de nascimento: " << "\n"; cin >> dia;
    cout << "Digite seu mês de nascimento: " << "\n"; cin >> mes;
    cout << "Digite seu ano de nascimento: " << "\n"; cin >> ano;
    cout << "você nasceu em " << dia << "/" << mes << "/" << ano << "\n";
    
    cout << "Você passou por essa quantidade de dias: " <<(diaAtual - dia) + (mesAtual - mes)*30 + (anoAtual - ano)*365;
    
}
