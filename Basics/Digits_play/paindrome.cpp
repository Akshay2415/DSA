#include <iostream>
#include <cmath>
using namespace std;

//count all digits of a number
void palindromeDigit(int n){
    int revNo = 0;
    int dup = n;
    while(n > 0){
        
        int lastDigit = n % 10;
        revNo = (revNo * 10) + lastDigit;        
        n = n/10;
        
    }
    if(revNo == dup) cout << "yes" ;
    else cout << "no";
}


int main() {
    int n ;
    cin >> n;
    palindromeDigit(n);
}
