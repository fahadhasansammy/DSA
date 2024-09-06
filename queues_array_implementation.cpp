#include<iostream>
using namespace std;
class queue{
    int* arr;
    int qfront, rear, size;
public:
    queue(){
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }
    void enqueue(int data){
        if(rear == size){
            cout<<"Queue is full!"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }   
    int dequeue(){
        if(qfront == rear){
            return -1;
        }
        else{
            int ans =arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){  //for save the wasted memory
                qfront=0;
                rear=0;
            }
        return ans;
        }
    }
    int front(){
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }

    }
    bool isEmpty(){
        if(qfront == rear){ 
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    cout<<q.front()<<endl; // Output: 2
    cout<<q.isEmpty()<<endl; // Output: false
    return 0;
}