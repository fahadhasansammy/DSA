//6.Write a program to add two whole numbers (without fractional values) taking input from user and display its sum in a separate function. Make sure to pass the two whole numbers as function argument/parameters
#include<iostream>
using namespace std;
int sum(int a,int b){
    int sum=a+b;
    cout<<sum;
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    sum(a,b);
}