#include<iostream>
using namespace std;

int main(){
    int a[3][3],n;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
    cout<<endl;
    }
}