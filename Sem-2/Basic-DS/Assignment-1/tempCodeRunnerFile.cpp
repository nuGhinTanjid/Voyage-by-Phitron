for(Node *i=head; i->nxtNodeAdr!=NULL; i=i->nxtNodeAdr){
        for(Node *j=i->nxtNodeAdr; j != NULL; j=j->nxtNodeAdr){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }