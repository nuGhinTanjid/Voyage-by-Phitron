#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    vector<int> a(n);

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<n; i++){
        cin>>a[i];
        pq.push(a[i]);
    }

    int q; cin>>q;

    while(q--){
        int cmnd; cin>>cmnd;

        if(cmnd==0){
            int x; cin>>x;
            pq.push(x);
            cout<<pq.top()<<endl;
        }
        else if(cmnd==1){
            if(!pq.empty()){
                cout<<pq.top()<<endl;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
        else if(cmnd==2){
            if(!pq.empty()){
                pq.pop();
                if(pq.empty()) cout<<"Empty"<<endl;
                else  cout<<pq.top()<<endl;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
    }


return 0;
}