#include <bits/stdc++.h>
using namespace std;


/* 
1st Variety where +ve and -ve elements are equal in array 
*/
vector<int> twoSumBetter(vector<int> &nums){
    int n = nums.size();
    vector<int>ans(n,0);
    int posIndex = 0 , negIndex = 0;

    for(int i = 0 ; i < n; i++ ){
        if(nums[i] < 0){
            ans[negIndex] = nums[i];
            negIndex +=2;
        }
        else{
            and[posIndex] = nums[i];
            posIndex += 2;
        }
    }
    return ans;
}

/* 
2nd Variety where +ve and -ve elements are not equally distributed in and array 
*/

