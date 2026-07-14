#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <set>


using namespace std;

//it is a dynamic data structure
void explainVector(){
   //declarations of vector 
    vector<int> v;

    v.push_back(1); //{1}
    v.emplace_back(2); //{1,2}

    vector<pair<int ,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int>v(5,100);
    //{100,100,100,100,100}

    vector<int>v(5); //{0,0,0,0,0}

    vector<int>v1;
    vector<int>v2(v1); //to copy vector
    
    ///////TO ACCESS VECTOR
    //--->ITERATORS

    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it) << " "; //* this is for to get the memory location

    it = it+2;
    cout << *(it) << " ";

    vector <int>::iterator it = v.end();
    // vector <int>::iterator it = v.rend();
    // vector <int>::iterator it = v.rbegin();

    cout << v[0]<<" "<<v.at(0);
    cout << v.back() << " ";

    //to print vector use for loop
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    //it is shortcut to declare vector or using iterator (auto)
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it:v){
        cout << it <<" ";
    }//{10,20,30}-->{it,it,it}

    //DELETION of VECTOR 
    v.erase(v.begin()+1); //for single element 

    v.erase(v.begin()+2 ,v.begin()+4); //for multiple element (start,end) 

    //INSERT function

    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(), 300); //{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

    vector<int>copy(2,50); //{50,50}
    v.insert(v.begin(), copy.begin() ,copy.end()); //{50,50,300,10,10,100,100}

    //{10,20}
    cout << v.size(); //2

    //{10,20}
    v.pop_back(); //{10}

    //v1 -> {10,20}
    //v2 -> {30,40}
    v1.swap(v2); //v1->{30,40} v2->{10,20}
    
    v.clear(); //erases the entire vector

    cout << v.empty();
}


void explainList(){

    list<int>ls;
    
    ls.push_back(2); //{2}
    ls.emplace_back(4);  //{2,4}

    ls.push_front(5); //{5,2,4}
    ls.emplace_front(); //{2,4}

    //rest function same as vector 
    //begin end rbegin rend clear insert size swap
}
 

void explainDQ(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    dq.front();

    //rest function same as vector 
    //begin end rbegin rend clear insert size swap

}


void explainStack(){
    //LIFO principle

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5); //{5,3,3,2,1}

    cout <<st.top(); // print 5 "st(2) is invalid "

    st.pop();

    cout<< st.top(); //3
    cout<< st.size(); //4
    cout<< st.empty(); 

    stack<int>st1,st2;
    st1.swap(st2);
}



void explainQueue(){
    queue<int>q;

    q.push(1);
    q.push(2);
    q.emplace(4); // {1,2,4}

    q.back();
    cout <<q.back();
    //print 9

    //Q is {1,2,9}
    cout<< q.front(); //prints 1

    q.pop(); //{2,9}

    cout << q.front();  //prints 2

    //size swap empty same as stack
}

void explainPriority(){
    priority_queue<int>pq;

    pq.push(5);
    pq.push(2); //{5,2}
    pq.push(8);  //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<< pq.top(); //{prints 10}

    pq.pop(); //{8,5,2}

    cout << pq.top(); //prints 8

    //size swap empty function same as others

    //Minimum Heap
    priority_queue<int , vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(5);
    pq.push(5);
    pq.emplace(10);

    cout<< pq.top(); 
}

void explainSet(){
    //set stores this into a sorted and unique order
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

 //Functionality of insert of vector 
 //can be used also,
 //that only increases efficiency

 //begin(), end(), rbegin(), rend(), size(),
 //empty() and swap() are same as those of above

    //{1,2,3,4,5}
    auto it = st.find(3);

    //{1,2,3,4,5}
    auto it = st.find(6);

    //{1,4,5}
    st.erase(5); //erases 5 takes logarithmic time

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); //it takes constant time

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); //after erase {1,4,5} [first, last]

    //lower bound and upper bound function works in the same way 
    //as in vector does

    //this is the syntax
    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3); 

}

void explainMulriset(){
    //it is same as set but 
    // it store the values in sorted order not unique

    //only stores duplicate elements also
}

void explaiUnorderedset(){
    // unordered set<int>st;

    //lower_bound() and upper_bound() function
    //does not works, reast all functions are same 
    // as above , it does not stores in any
    //particular order it has a better complexity
    //than set in most cases, expect some when collision happens
}

void explainMap(){
//it stores the variable in key value pair
//map stores data structure in unique or sorted orderr
    map<int, int>mpp;

    map<int, pair<int,int>>mpp;

    map<pair<int, int>, int>mpp;

    mpp[1] = 2;
    // mpp.emplace({3,4});
    //mpp.insert({2,4});
    //mpp[{2,3}] = 10;

    // {
    //     {1,2}
    //     {2,4}
    //     {3,1}
    // }

    for(auto it : mpp){
        cout << it.first << " " <<it.second <<endl;
    }

    cout <<mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    // cout << *(it).second;

    auto it  = mpp.find(5);

    //this is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    //erase swap size empty are same as above

}

int main() {
    
}