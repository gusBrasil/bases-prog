#include <iostream>
using namespace std;

int main(){
    
    char str[10] = {'j','o','a','o'};
    char str1[10] = {"Joao"};
    char str_vect [3][10] = {"Joao", "Maria", "Jose"};
    float vect[6] = {1.3, 4.5, 2.7, 4.1, 0.0, 100.1};
    int matrx [3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    cout << str[1] << "\n";
    cout << str_vect[1][1] << "\n";
    cout << vect[2] << "\n";
    cout << matrx[1][2] << "\n";
}
