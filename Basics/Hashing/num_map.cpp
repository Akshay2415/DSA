#include <bits/stdc++.h>
using namespace std;

//in this the size problem is solved 
//map inly stores the value that are inserted or give in array
//does not store the unwanted value
//it store the element and check if there is another one 
//then increase the count how many times it appear 


//for character 
//map<char,value>

//TIME COMPLEXITY IS O(log n)
//this is in every case best avg worst

int main() {
    int n;
    cin >>n;
    int arr[n];

    map<int,int>mpp; //declaring map
    for(int i = 0 ; i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;  //pre computing
    }
    
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout <<  mpp[number] <<endl;
    }

    return 0;
}
