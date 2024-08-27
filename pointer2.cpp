#include<iostream>
using namespace std;
int main(){
    int x = 18;
    int y = 7.9;

    // Create a pointer that can store address of x;
    // As x is an integer variable , so we need a pointer 
    // That can sotre address of integer type
    int *ptr = &x;
    cout<<"Address sotred inside ptr: "<<ptr<<endl;
    cout<<"Value present at the address sotred in ptr: "<<*ptr<<endl;//dereferece 

    // Create a pointer that can store address of y;
    // As y is an integer variable , so we need a pointer 
    // That can sotre address of integer type
    int *ptr1 = &x;
    cout<<"Address sotred inside ptr: "<<ptr1<<endl;
    cout<<"Value present at the address sotred in ptr: "<<*ptr1<<endl;

    //_______________________

    x=23; // The bucket x updated the value from 18 -> 23
    //But ptr is still pointing to same bucket 
    //Now if we derefernce ptr, we will get 23

    cout<<"New updated value of x"<<x<<endl;
    cout<<"ptr still pointing to same memory which has 23 istead of "<<*ptr;

    //Updating x with pointer 
    *ptr = 50;
    cout<<"New value of x "<<x<<endl;
    cout<<"New value pointed by ptr "<<*ptr<<endl;

    int valueAtX = *ptr;
    cout<<valueAtX<<endl;
   
}