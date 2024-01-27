#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};

void insert_tail(Node *&head, Node *&tail, int v){
    Node *newNode = new Node(v);
    if(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}

int main(){


     Node *head= NULL;
     Node *tail= NULL;

   int val;
   while(true){
    cin>>val;
    if(val==-1)break;
    insert_tail(head, tail, val);
   }

   Node *i=head;
   Node *j=tail;
   bool flag=false;

   while(i!=NULL){
    if(i->val != j->val){
        flag=true;
    }
    i=i->next;
    j=j->prev;
   }
   if(flag==false){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

return 0;
}