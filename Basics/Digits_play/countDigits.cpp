#include <iostream>
#include <cmath>>
using namespace std;


//count all digits of a number
void extractDigit(int n){
   int cnt = 0;
    while(n > 0){
        int lastDigit = n % 10;
        cnt = cnt + 1;
        n = n/10;
    }
    cout << cnt ;
    //this is one approach 
}

//and this is for better timne complexity
void cntDigits(int n){
    int cnt = (int )(log10(n)+1);
    cout << cnt;
}

int main() {
    int n ;
    cin >> n;
    cntDigits(n);
}
