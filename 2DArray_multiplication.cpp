#include<iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2;
    cout<<"Ener the row and coloum number of array 1:";
    cin>>r1>>c1;
    cout<<"Ener the row and coloum number of array 2:";
    cin>>r2>>c2;
    if(c1!=r2){cout<<"Multiplication is not possible!";}
    cout<<"Enter the array 1:";
    int a[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    cout<<endl;
    }
    cout<<"array 1 is:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<a[i][j];
        }
    cout<<endl;
    }
    cout<<"Enter the array 2:";
    int b[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    cout<<endl;
    }
    cout<<"array 2 is:"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<b[i][j];
        }
    cout<<endl;
    }
    int c[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for(int k=0;k<r2;k++){
                value+=a[i][k]*b[k][j];
            }
            c[i][j]=value;
        }
        cout<<endl;
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<c[i][j];
        }
    }
}