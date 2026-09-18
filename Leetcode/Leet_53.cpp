#include <bits/stdc++.h>
using namespace std; 

//Kadane's Algorithm
/* 
1. get one maximum variable which has mini value 
    -> max = INT_MIN;
    -> sum = 0
2. do not carry -ve sum , if sum < 0 , reset sum to 0 
  ex-> sum = -2
      it is less than 0 so , sum = 0

3. Only logic is that iterate through array and keep adding 
    until one subarray meets the given answer

4. And if hypothetically array does not contain any subarray and 
   the sum is negative so return Empty array 
*/

class Solution {
public:
//Kadane's Algorithm
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxI = INT_MIN ;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            if(sum > maxI){
                maxI = sum;
            }    
            if(sum < 0){
                sum = 0;
            }
        }
        return maxI;
    }
};