//Find the last occurrence of an element x in a given array
#include<iostream>
#include<vector>
using namespace std;
/* int main(){
    int a[6],x;
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    cout<<"Enter the x value:";
    cin>>x;
    int occur=0;
    for(int i=0;i<6;i++){
        if(a[i]==x){
           occur=i;
        }
    }
    cout<<occur;
} */
/* using vector
int main(){
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter the x value:";
    cin>>x;
    int occur=0;
    for(int i=0;i<6;i++){
        if(v[i]==x){
           occur=i;
        }
    }
    cout<<occur;
} */

//can we are starting the search the last index

int main(){
    int a[6],x;
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    cout<<"Enter the x value:";
    cin>>x;
    int occur=0;
    for(int i=6;i>=0;i--){
        if(a[i]==x){
           occur=i;
           break;
        }
    }
    cout<<occur;
}