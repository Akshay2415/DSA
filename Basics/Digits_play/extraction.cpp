#include <iostream>
using namespace std;


//count all digits of a number
void extractDigit(int n){
    while(n > 0){
        int lastDigit = n % 10;
        cout << lastDigit << endl;
        n = n/10;
    }
}

int main() {
    int n ;
    cin >> n;
    extractDigit(n);
}