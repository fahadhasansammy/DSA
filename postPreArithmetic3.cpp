#include<iostream>
using namespace std;
int main(){
    int arr[2]={1,19};
    int *ptr = &arr[0];

    cout<<ptr<<" "<<*ptr<<endl;
    cout<<*ptr++<<endl;
    cout<<arr[0]<<" "<<arr[1]<<endl;
}