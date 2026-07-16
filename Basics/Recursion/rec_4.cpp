#include <bits/stdc++.h>
using namespace std;


//1.reverse an array by recursion
void f(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    f(i+1, arr,n);    
}

//2.Check whether the string is palindrome of not 
bool f(int i, string &s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return f( i+1, s);    
}


int main() {
    int n ;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++) cin >> arr[i];
    f(0 , arr ,n);

    for (int i = 0; i<n; i++) cout << arr[i] << " ";


    //for question 2
    string s = "madsm";
    cout << f(0,s);
    return 0;
}

//input - 5
//        1 2 3 4 5
//output - 5 4 3 2 1 


//if true op is 1
//if false op is 0