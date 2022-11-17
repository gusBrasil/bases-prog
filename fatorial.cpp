#include <stdio.h>
#include <iostream>

using namespace std;

int fat(int x) {
    int i;
    int f = 1;
    
    for (i = 1; i <= x; i++){
        f *= i;
    }
    return f;
}

int main() {
    int n;
    cout << "Digite um número inteiro não negativo: ";
    cin >> n;
    cout << "O fatorial é " << fat(n) << "\n";
}
