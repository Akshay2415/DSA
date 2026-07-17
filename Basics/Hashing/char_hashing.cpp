#include <bits/stdc++.h>
using namespace std;



int main() {
    string s; 
    cin >> s;
    

    // Precompute
    int hash[256] = {0}; 
    for(int i = 0 ; i<s.size() ; i++){
        hash[s[i]]++;
    }

    int q; //query
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        //fetch
        cout << hash[ch] << endl;
    }
    
    return 0;
}


/* 
Input --
      abcdabehf
        5
        a
        g
        h
        b
        f
*/

/* 
Output ->
            2
            0
            1
            2
            1

*/