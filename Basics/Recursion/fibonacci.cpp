/* 
FIBONACI SERIES--> it is type of series where next number is the 
                sum of lasst two numbers 

                ex-- 0 1 1 2 3 5 8 .... so on 
                next number = last number + second last number
                after 8 = 8+5 
                == 13


LOGIC for code is like -->
        N  it is the location /position of numbers 
        so f(N) -> N th fibonnaci number

        if f(3) ->2
           f(4) ->3

        So , f(5) = f(4) + f(3)
*/

#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if (n <= 1 ) return n;
    int last = f(n-1);
    int slast = f(n -2);
    return last + slast;    
}

int main() {
    
    cout << f(4);

    return 0;
}
