#include<iostream>
using namespace std;
int main(){
    int a[50];
    int n,x,i;
    cout<<"Enter the element of number:";
    cin>>n;
    cout<<"Enter the element :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    n--;
    cout<<"Arrray after deletion:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    a[i]=9;
    n++;
    cout<<"Arrray after insetion:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

}