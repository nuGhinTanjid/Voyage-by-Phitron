#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *nxtNodeAdr;

        Node(int val){
            this->val=val;
            this->nxtNodeAdr=NULL;
        }
};

void insert(Node *&head, Node *&tail, int v){
    Node *newNode = new Node(v);



    if(head == NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->nxtNodeAdr=newNode;
    tail=newNode;
}

int size(Node *head){
    Node *tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->nxtNodeAdr;
    }
    return cnt;
}

int main(){

    Node *head=NULL;
    Node *tail=NULL;
    int value;
    while(true){
        cin>>value;
        if(value==-1){
            // if (head == nullptr) {
            // cout << "0" << endl;
            // break;
            // }
            
            break;
         }
        
        insert(head, tail, value);
    }

    int mx= INT_MIN;
    int min= INT_MAX;

        for(Node *i=head; i !=NULL; i=i->nxtNodeAdr){
        if(mx<i->val){
            mx=i->val;
        }
        if(min>i->val){
            min=i->val;
        }
    }
    cout<<(mx-min)<<endl;
return 0;
}