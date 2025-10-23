#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void solve(){
    int n;
    cin>>n;

    Node* head=NULL;
    Node* temp=NULL;
    Node* last=NULL;

    for(int i=0;i<n;i++){
        int value;
        cin>>value;

        temp=new Node();
        temp->data=value;
        temp->next=NULL;

        if(head==NULL){
            head=temp;
            last=temp;
        }else{
            last->next=temp;
            last=temp;
        }

    }
     Node* current=head;
     cout<<"Before insertion Linked list :";

     while(current!=NULL){
         cout<<current->data<<" ";
         current=current->next;
     }
     cout<<endl;

     int a=54;
     Node* newN=new Node();
     newN->data=a;
     newN->next=NULL;

     if(head==NULL || head->data>=a){
          newN->next=head;
          head=newN;
     }else{
          Node* current=head;
          while(current->next!=NULL && current->next->data<a){
               current=current->next;
          }
          newN->next=current->next;
          current->next=newN;

     }
     cout<<"after insertion Linked list :";
      temp=head;
     while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
     }
     cout<<endl;


}


int main(){
    solve();
}


