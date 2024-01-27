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

void printList(Node *head){
    Node *tmp = head;

    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->nxtNodeAdr;
    }
}

int main(){

    Node *head1=NULL;
    Node *tail1=NULL;
    int val1;
    while(true){
        cin>>val1;
        if(val1==-1) break;
        insert(head1, tail1, val1);
    }


    //  Node *i, *j, *dup;

    //  i= head1;
    //  j= i->nxtNodeAdr;

    //  while(i != NULL){
    //     while(j != NULL){
    //          if(i->val == j->val){
    //             dup =j;
    //             j=j->nxtNodeAdr;
    //             delete dup;
    //             }
    //             else{
    //                 j=j->nxtNodeAdr;
    //             }
    //             i=i->nxtNodeAdr;
    //     }
    //  }

    for (Node *i = head1; i != NULL; i = i->nxtNodeAdr) {
        for (Node *j = i; j->nxtNodeAdr != NULL;) {
            if (i->val == j->nxtNodeAdr->val) {
                Node *dup = j->nxtNodeAdr;
                j->nxtNodeAdr = j->nxtNodeAdr->nxtNodeAdr;
                delete dup;
            } else {
                j = j->nxtNodeAdr;
            }
        }
    }





    // for(Node *i=head1; i != NULL; i=i->nxtNodeAdr){
    //     for(Node *j=i->nxtNodeAdr; j != NULL;j=j->nxtNodeAdr){
    //         if(i->val == j->val){
    //             i = tail1;
    //             Node *dup =j;
    //             j=j->nxtNodeAdr;
    //             delete dup;
    //             }
    //             // else{

    //             // }    
    //         }
    //     }
    
    printList(head1);
return 0;
}

















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

void printList(Node *head){
    Node *tmp = head;

    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->nxtNodeAdr;
    }
}

int main(){

    Node *head1=NULL;
    Node *tail1=NULL;
    int val1;
    while(true){
        cin>>val1;
        if(val1==-1) break;
        insert(head1, tail1, val1);
    }



    for (Node *i = head1; i != NULL; i = i->nxtNodeAdr) {
        for (Node *j = i; j->nxtNodeAdr != NULL;) {
            if (i->val == j->nxtNodeAdr->val) {
                Node *dup = j->nxtNodeAdr;
                j->nxtNodeAdr = j->nxtNodeAdr->nxtNodeAdr;
                delete dup;
            } else {
                j = j->nxtNodeAdr;
            }
        }
    }

    
    printList(head1);
return 0;
}