#include<iostream>
using namespace std;
void out(int a,int b){
    int sum=a+b;
    cout<<sum;
}
int sum(int a,int b){
    int sum=a+b;
    cout<<sum;
    return sum;
}

int main(){
    int i=8,j=7;
    out(i,j);
    cout<<endl;
    sum(i,j);
}