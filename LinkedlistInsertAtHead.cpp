#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
    Node(int data){  //constuctor
        this ->data=data;
        this ->Next=NULL;
    }
    
     
};
void insertAtHead(Node* &head,int d){
    //New node create
    Node* temp=new Node(d);
    temp -> Next=head;
    head = temp;
    }
void print(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp -> data<<" ";
        temp=temp ->Next;
    }
    cout<<endl;
        
}

int main(){
    Node* node1=new Node(2);
    //cout<<node1 ->data<<" ";
    //cout<<node1 ->Next<<endl;
    //Head pointed to node1;
    Node* head=node1;
    print(head);

    insertAtHead(head,12);
    print(head);

}