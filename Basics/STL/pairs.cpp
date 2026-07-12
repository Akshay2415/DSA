#include <iostream>
using namespace std;

void explainPair(){
    pair<int,int>p1 = {1,3};
    cout << p1.first << " " << p1.second;

    pair<int , pair<int ,int>>p2 = {1,{2,3}};
    cout << p2.first <<" " << p2.second.second ;

    pair<int,int>arr[] = {{1,5},{8,5},{9,6}};
    cout << arr[1].second;
}
 

int main() {
    explainPair();
}