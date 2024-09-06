#include<iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int front,size,rear;
    public:
    CircularQueue(int n){
        size=n;
        arr =new int[size];
        front=rear=-1;
    };

    bool enqueue(int value){
        if((front ==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
            return false;
        }
        else if(front == -1){ //for first element isert
            front=rear=0;
            arr[rear]=value;
        } 
        else if(rear==size-1 && front!=0){ //when rear is in last position and front is in middle position
            rear=0;
            arr[rear]=value;
        }
        else{ //normal flow;
            rear++;
            arr[rear]=value;
        }
    }
    int dequeue(){
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
};



/*
class CircularDeque{
    int* arr;
    int front,rear,size;
    CircularDeque(int n){
        size = n;
        arr = new int[size];
        front = rear = 0;
    }
    bool Enqueue(int value){
        if((front == 0 && rear == size-1) || (rear ==(front-1) %(size-1) ) ){
            cout<<"Queue is full!"<<endl;
            return false;
        }
        else if(rear == -1){
            front=rear=0;
            arr[rear] = value;
        }
        else if(rear == front-1 && front!=0){
            rear=0;
            arr[rear] = value;
        }
        else{
            arr[rear++]=value;
        }
    }
    int Dequeue(){
        if(front == -1){
            cout<<"Queue is empty!"<<endl;
        }
        else if(front == 0){
            rear=front= -1;

        }
        else if(front == size-1){
            front==0;
        }
        else{
            arr[front++];
        }
    }
};*/