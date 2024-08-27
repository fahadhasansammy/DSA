#include<iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9};
    int x,pos=-1;
    cout<<"Enter the searching element :";
    cin>>x;
    for(int i=0;i<10;i++){
        if(a[i]==x){
            pos=i+1;
            break;
        }
    }
    if(pos==-1){
        cout<<"Not found";
    }
    else{
        cout<<"Found at "<<pos<<" position!";
    }

}

