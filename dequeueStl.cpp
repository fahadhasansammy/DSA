#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int> d;
    d.push_front(12);
    d.push_back(23);

    cout<<d.front()<<endl;//12
    cout<<d.back()<<endl;//23

    d.pop_front();//delete 12
    
    cout<<d.front()<<endl;//23
    cout<<d.back()<<endl;//23
    d.pop_back();//delete 23

    if(d.empty()){
        cout<<"Deque is empty"<<endl;
    }
    else{
        cout<<"Deque is not empty"<<endl;
    }
}