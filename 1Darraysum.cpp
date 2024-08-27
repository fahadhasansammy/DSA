#include<iostream>
using namespace std;

int main(){
    int a[3]={5,10,15};
    int b[3]={5,10,15};
    int sum[3];
    for(int i=0;i<3;i++){
        sum[i]=a[i]+b[i];
        cout<<sum[i]<<" ";
    }
}
