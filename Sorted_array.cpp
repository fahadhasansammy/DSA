//Check if the given array is sorted or not.
#include<iostream>
using namespace std;
int main(){
    int a[6]={1,2,3,4,5,6};
    bool sortedflag=true;
    for(int i=1;i<6;i++){
        if(a[i]<=a[i-1]){
            sortedflag=false;
        }
    }
    if(sortedflag==false){
        cout<<"Not Sorted";
    }
    else{
        cout<<"sorted";
    }
}