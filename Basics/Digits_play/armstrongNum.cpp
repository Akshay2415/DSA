#include <iostream>
#include <cmath>
using namespace std;

void armstrongDigit(int n){
    int dup = n;
    int sum = 0;
    while(n > 0){
        
        int ld= n % 10;
        sum =  sum + (ld*ld*ld);      
        n = n/10;
        
    }
    if(dup == sum) cout << "yes this is Armstrong Number" ;
    else cout << "no";
}


int main() {
    int n ;
    cin >> n;
    armstrongDigit(n);
}
