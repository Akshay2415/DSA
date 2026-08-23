#include<bits/stdc++.h>
using namespace std;

/* 
Q) Sort array of 0's 1's 2's
*/
//Brute force approach using Merge sort

//Better approach
//TC->O(2N)
//SC->O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;

        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                cnt0++;
            }else if(nums[i]==1){
                cnt1++;
            }else{
                cnt2++;
            }
        }

        for(int i = 0;i<cnt0;i++){
            nums[i]= 0; 
        }
        for(int i = cnt0; i < (cnt0 + cnt1 );i++){
            nums[i] = 1;
        }
        for(int i =( cnt0 + cnt1); i < n ; i++){
            nums[i] = 2;
        }

    }
};