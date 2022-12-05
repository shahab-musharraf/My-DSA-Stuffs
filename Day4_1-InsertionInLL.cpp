#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtHead(node* &head, int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp= head;
    n->next=temp;
    head=n;
}

void display(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}





int main(){

    node* head = NULL;

    cout<<"Inserted At Tail: "<<endl;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    cout<<endl;

    cout<<"Inserted At Tail then At Head: "<<endl;
    insertAtHead(head, 5);
    insertAtHead(head, 5);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    display(head);
    cout<<endl;

    return 0;
}
