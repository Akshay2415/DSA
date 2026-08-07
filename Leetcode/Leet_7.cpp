#include <bits/stdc++.h>
using namespace std;

//Reverse the Integer (with integer limit)

class Solution {
public:
    int reverse(int x) {
        int revNo = 0;

        while(x != 0){
            int lastDigit = x%10;
            
            if(revNo > INT_MAX/10 || revNo < INT_MIN/10){
                 return 0 ;
                }
            revNo = (revNo *10) + lastDigit;
            x = x/10;
        }
        return revNo;
    }
};

//in while loop (x != 0)  is use bcoz of negative numbers