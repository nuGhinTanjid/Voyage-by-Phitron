#include <bits/stdc++.h>
using namespace std;
const int N= 1e3 + 5;
vector<pair<int, int>> v[N];
int dis[N];
class cmp{
    public:
        bool operator()(pair<int, int> a, pair<int , int> b){
            return a.second > b.second;
    }
};

void canGo(int src){
    priority_queue<pair<int, long long int>, vector<pair<int, long long int>>, cmp> pq;
    pq.push({src, 0});
    dis[src]=0;
    while(!pq.empty()){
        pair<int, long long int> parent=pq.top();
        pq.pop();
        int node=parent.first;
       long long int cost=parent.second;

        for(pair<int, long long int> child : v[node]){
            int childNode=child.first;
            long long int childCost=child.second;
            if(cost+childCost< dis[childNode]){
                dis[childNode]=cost+childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
            

int main(){

    long long int n, e;
    cin>>n>>e;
    while(e--){
        long long int a, b, c;
        cin>>a>>b>>c;
        v[a].push_back({b, c});
        
    }
    for(int i=0; i<N; i++){
        dis[i]=INT_MAX;
    }
    
    int src; cin>>src;

    canGo(src);

    int testcase; cin>>testcase;
    while(testcase--){
        long long int d, dw;
        cin>>d>>dw;
        if(dis[d] <= dw){
            //cout<<"show->"<<dis[d]<<endl;
            cout<<"YES"<<endl;
        }
        else{
           // cout<<"show->"<<dis[d]<<endl;
            cout<<"NO"<<endl;
        }
    }


return 0;
}