#include <bits/stdc++.h>
using namespace std;


//check if array is sorted and rotated or not

class Solution {
public:
    bool check(vector<int>& nums ) {
        int count = 0;
        int n = nums.size();

        for(int i = 0;i<n ;i++){
            if(nums[i] > nums[(i +1) % n] ){
                count++;
            }
        }

        return count <=1;
    
    }
};

/* 
TC - O(n)
SC - O(1)

ARRAYS 
*/