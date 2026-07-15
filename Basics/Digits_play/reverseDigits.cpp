#include <iostream>
#include <cmath>
using namespace std;

//count all digits of a number
void reverseDigit(int n){
    int revNo = 0;
    while(n > 0){
        int lastDigit = n % 10;
        revNo = (revNo * 10) + lastDigit;        
        n = n/10;
        
    }
    cout << revNo;
}


int main() {
    int n ;
    cin >> n;
    reverseDigit(n);
}
