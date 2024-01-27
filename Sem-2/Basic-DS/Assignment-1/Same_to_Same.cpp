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

    Node *head1=NULL;
    Node *tail1=NULL;
    int val1;
    while(true){
        cin>>val1;
        if(val1==-1) break;
        insert(head1, tail1, val1);
    }

    Node *head2=NULL;
    Node *tail2=NULL;
    int val2;
    while(true){
        cin>>val2;
        if(val2==-1) break;
        insert(head2, tail2, val2);
    }

    //int res=size(head1); cout<<res<<endl;

    Node *tmp1=head1;
    Node *tmp2=head2;
    bool flag= true;

    while(tmp1!= NULL && tmp2!= NULL){
         if(tmp1->val != tmp2->val ){
            flag = false;
            break;
         }
         tmp1=tmp1->nxtNodeAdr;
         tmp2=tmp2->nxtNodeAdr;
    }
    if (tmp1 != NULL || tmp2 != NULL) {
    flag = false;
}
    if(flag==false){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    
return 0;
}