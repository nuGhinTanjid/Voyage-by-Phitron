#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, e;
    cin>>n>>e;

    vector<int> ar[n];
    while(e--){
        int a, b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }

    int q; cin>>q;
    while(q--){
        int x; cin>>x;

        vector<int> found;
        for(auto v: ar[x]){
            found.push_back(v);
        }

        if(found.empty()){
            cout<<"-1"<<endl;
        }
        else{
            sort(found.begin(), found.end(), greater<int>());
            for(auto ver: found){
                cout<<ver<<" ";
            }
            cout<<endl;
        }
    }

return 0;
}