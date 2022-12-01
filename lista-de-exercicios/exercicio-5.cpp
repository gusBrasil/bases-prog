#include <iostream>

using namespace std;

int main() {
    int i=0, p=0;    
    int c, a[6]={}, b[6]={};
    int para =0, impd = 0;
    
    for (c=0; c<6; c++) {
        cin >> a[c];
        if (a[c]%2==0) {
            p++; 
        } else{
            i++; }
    }
    for (c=0; c<6; c++) {
        cin >> b[c];
        if (b[c]%2==0) {
            p++; 
        }else{
            i++; }
    }
    int C[p], D[i];
    for (c=0; c<6; c++){
            if (a[c] % 2 == 0){
                C[para] = a[c];
                para ++;
            }else {
                D[impd] = a[c];
                impd ++; }
    }
    for (c=0; c<6; c++){
            if (b[c] % 2 == 0){
                C[para] = b[c];
                para++;
            }else{
                D[impd] = b[c];
                impd++; }
    } cout << "\n";
    for (int ping = 0; ping < 6; ping++){
        cout << " " << a[ping] << " "; }
        cout << "\n";
    for (int ping = 0; ping < 6; ping++){
        cout << " " << b[ping] << " "; }
        cout << "\n";
    for (int ping = 0; ping < para; ping ++){
        cout << " " << C[ping] << " "; }
        cout << "\n";
    for (int ping = 0; ping < impd; ping ++){
        cout << " " << D[ping] << " "; }
}
