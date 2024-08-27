#include<iostream>
using namespace std;
int main(){
    int a[3][5] = {{1,2,3,4,5},{2,4,6,8,10},{3,6,9,12,15}};
    for(int i=0;i<3;i++){
        for(int j=0;i<5;i++){
        cout<<a[i][j];
    }
    }
}