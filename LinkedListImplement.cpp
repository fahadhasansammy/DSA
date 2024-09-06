#include<iostream>
using namespace std;
class Node{          //node class
    public:
    int data;
    Node* next;
    Node(int data){ //value assign
        this -> data=data;
        this -> next=NULL;
    }
};
void inserAtHead(Node* &head,int d){
    //new node create
    Node* temp=new Node(d);
    temp -> next=head;
    head=temp;
}
void print(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
    
}
int main(){
    // createed a new node

    Node* node1= new Node(10); 

    cout<<node1 ->data<<" ";   //Like a structure access node1.val and node1.next in here use pointer access
    cout<<node1 ->next<<endl;

    //head pointed to node1
    Node* head = node1;
    print(head);

    inserAtHead(head,12);
    print(head);

    inserAtHead(head,15);
    print(head);

}