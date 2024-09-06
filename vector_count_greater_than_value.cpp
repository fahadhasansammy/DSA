//Count the number of elements strictly greater than value x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6); //you can use array
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter the x value:";
    cin>>x;
    int count=0;
    for(int i=0;i<6;i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count;
}