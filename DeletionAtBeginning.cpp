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
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    cout<<"After deletion:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}