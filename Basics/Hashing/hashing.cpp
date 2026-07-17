#include <bits/stdc++.h>
using namespace std;



int main() {
    int n; 
    cin >> n;
    int arr[n];  //the size of an array go upto 10^6 inside main function 
                 //it is going to give you segmentation error for putting array of greater size 
    for(int i = 0; i<n ;i++){
        cin >> arr[i];
    }

    // Precompute
    int hash[13] = {0}; //declaring hash //size of it
    //depending on maximum size of array you declare the hash
    for(int i = 0 ; i<n ; i++){
        hash[arr[i]] += 1;
    }

    int q; //query
    cin >> q;
    while(q--){
        int number ;
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }
    
    return 0;
}


/* 
Input --
       n =  5
       elements in arr = 1 3 2 1 3
       query 5
       numbers-> 1
                 4
                 2
                 3
                 12
*/

/* 
Output ->
            2
            0
            1
            2
            0

*/