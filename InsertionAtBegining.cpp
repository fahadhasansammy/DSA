#include<iostream>
using namespace std;
int main(){
    int a[50];
    int n,x;
    cout<<"Enter the element of number:";
    cin>>n;
    cout<<"Enter the element :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Enter the beginging of element:"<<endl;
    cin>>x;
    for(int i=n;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=x;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}