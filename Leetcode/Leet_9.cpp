#include <bits/stdc++.h>
using namespace std;

//Check it is palindrome or not ?

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }

        int dup = x;
        long long revNo = 0 ; // use long long bcoz of 
                             //memory overflow

        while(x != 0){
            int lstDigit = x % 10;
            revNo = revNo * 10 + lstDigit ;
            x=x/10;
        }
        
        return dup == revNo;
    }
};