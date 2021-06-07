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
void insertathead(node* &head,int val){
    node* n= new node(val);
    n->next= head;
    head =n;

}
void insertionattail(node* &head, int val){
    node* n= new node(val);

    if(head==NULL)
    {
        head=n;
        return;

    }

    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

bool search(node* head,int key){
    node* temp= head;
    while(temp!=NULL){
        if(temp->data==key) return true;
        temp=temp->next;
    }
    return false;
}

void deletion(node* head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deletehead(head);
        return;
    }
    node* temp=head;
   while(temp->next->data!=val){
       temp=temp->next;
   }
   node* todelete=temp->next;

   temp->next=temp->next->next;
   delete todelete;
}

void deletehead(node* &head){
    node* todelete=head;
    head=head->next;
     delete todelete; 
}
int main(){
    node* head=NULL;
    insertionattail(head,1);
     insertionattail(head,2);
      insertionattail(head,3);
      insertathead(head,4);
      display(head);
    if(  search(head,6)== true) cout<<"found";
    deletion(head,3);
    deletehead(head); 
     display(head);

    return 0;
}