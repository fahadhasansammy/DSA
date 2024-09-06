#include<iostream>
using namespace std;
int main(){
    int a[50]={12,111,44,56,2,7,9};
    for(int i=0;i<7;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
    for(int i=7;i>4;i--){
        a[i]=a[i-1];
    }
    cout<<endl;
    a[4]=100;
    for(int i=0;i<8;i++){
        cout<<a[i]<<endl;
    }
}