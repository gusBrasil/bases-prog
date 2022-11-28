// Escreva um programa que apresente a série de Fibonacci até o décimo quinto termo. A série
// de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc, caracterizando-se
// pela soma de um termo posterior com o seu anterior subseqüente.

// Programa feito por Gustavo Medeiros Brasil para a aula de Bases de Programaçãow

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int n = 15, t1 = 0, t2 = 1, proxTermo = 0;

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << "\n";
            continue;
        }
        if(i == 2) {
            cout << t2 << "\n";
            continue;
        }
        proxTermo = t1 + t2;
        t1 = t2;
        t2 = proxTermo;
        
        cout << proxTermo << "\n";
    }
    return 0;
}
