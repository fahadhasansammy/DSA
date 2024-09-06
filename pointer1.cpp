#include<iostream>
using namespace std;

int main(){
    int x=18;
    float y=7.9;
    
    //Create a pointer that can store address of x;
    //As x is an integer variable, so we need a pointer
    //that can store address of integer type
    int *ptr=&x;
    cout<<"Address stored inside ptr: "<<ptr<<endl;
    cout<<"Value present at the address stored in ptr: "<<*ptr<<endl;//dereferece

    //Create a pointer that can store adress of y
    //Y is a float variable,so we need to store it in a pointer
    //Float pointer
    float *ptr2=&y;
    cout<<ptr2<<endl;

}