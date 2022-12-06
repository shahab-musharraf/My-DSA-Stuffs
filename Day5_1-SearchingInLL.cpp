#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;
  
  node(int val){
    data=val;
    next=NULL;
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
     
void display(node* head){
  while(head!=NULL){
    cout<<head->data<<"->";
    head=head->next;
  }
  cout<<"NULL"<<endl;
}
     
void searchVal(node* head, int val){
  int count=0;
  while(head!=NULL){
    count++;
    if(head->data==val){
      cout<<val<<" is found at "<<count<<" th position"<<endl;
      return;
    }
    head=head->next;
  }
  cout<<val<<" is not found"<<endl;
}
    
     
int main(){
  node* head=NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  display(head);
  
  int n;
  cin>>n;
  searchVal(head,n);
  return 0;
}
  
  
