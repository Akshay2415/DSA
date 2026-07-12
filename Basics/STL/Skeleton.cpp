#include <iostream> //this part is called including library doing the input output part

using namespace std; //this section is for add STD to cin and cout 

//functions 
void print(){
    //this void type of does not return anything
    cout << "Hello World";
}

int sum(int a ,int b){
    //this type of function returns something and also does have parameter 
   return a + b ;
    
}

//this is the part where we write the code 
int main() {
    print();
    sum(4,5);

    return 0;
}