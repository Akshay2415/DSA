#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    //they are same
    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra(){

    sort(a, a+n);
    //if {1,4,5,3}
    //a+4 or a+n indicates the  location after 3
    //and picks element upto that location and sort it 
    
    sort(v.begin() , v.end());

    sort(a+2,a+4);

    pair<int ,int>a[] = {{1,2},{2,1},{4,1}};

    //sort it according to second element
    //if second element is same then sort
    //it according to first element but in descending 

    sort(a, a+n, comp);
    //comp means comparator it is a function 
    //and it is boolean type function
    
    //{{4,1}, {2,1}, {1,2}};


    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 1938710378378972738;
    int cnt = __bulitin_popcountll();

    string s = "123";
    sort(s.begin(),s.end());
    
    //after 123 permutation goes like 231,321...upto end like all six 
    //and if string is from middle of any number like 213 then goes upto
    // end but we dont going to get all combinations so for that string must be 
    //SORTED then 
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));

    int maxi = *max_element(a,a+n);
    //max element give the location of maximum number in array and
    // * shows the element where it wrote * shows the memory location it is wrong 
    //it shows the element on that memory location 

    //min_element() works opposite of max element

}

int main(){
    return 0;
}