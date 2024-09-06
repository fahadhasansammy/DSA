#include<iostream>
using namespace std;
class Deque{
    int *arr;
    int front,rear,size;
public:
    Deque(int n){
        size =n;
        arr =new int[size];
        front=rear=-1;
    }
    bool pushFront(int x){
        //check full or not
        if( (front==0 && rear==size-1) || (front==0 && rear==size-1)){
            cout<<"Deque is full\n";
            return false;
        }
        else if( front==-1){
            front=rear=0;
        }
        else if( front == 0 && rear!=size-1){
            front=x-1;
        }
        else{
            front--;
        }
        arr[front]=x;
        return true;
    }
    bool pushRear(int x){
        if( (front==0 && rear==size-1) || (front==0 && rear==size-1)){
            cout<<"Deque is full\n";
            return false;
        }
        else if( front==-1){
            front=rear=0;
        }
        else if(front==0 && rear==size-1){
            front=x-1;
        }
        else{
            front--;
        }
        arr[front]=x;
        return true;
    }
    int popFront(){
        if(front==-1){ //when queue is empty
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else if(front==rear){ //single element is present
            front=rear=-1;
        }
        else if(front=size-1){ //when front is at last element
            front=0; //to maintain cyclic nature
        }
        else{
            return arr[front++];
        }
    }
    int popRear(){
        if(front==-1){ //when queue is empty
            cout<<"queue is empty"<<endl;
            return -1;
        }
        int ans = arr[rear];
        arr[rear]=-1;
        if(front==rear){ //single element is present
            front=rear=-1;
        }
        else if(rear==0){ //when front is at last element
            rear=size -1; //to maintain cyclic nature
        }
        else{
            return arr[rear--];
        }
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    bool isEmpty(){
        if(front == -1)
            return true;
        else 
            return false;
    }
    bool isFull(){
        if((front == 0 && rear ==size -1)|| (rear=(front-1)%(size-1))){
            return true;
        }
        else{
            return false;
        }
    }

};