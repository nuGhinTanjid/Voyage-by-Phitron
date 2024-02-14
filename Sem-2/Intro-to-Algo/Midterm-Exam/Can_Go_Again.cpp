#include <bits/stdc++.h>
using namespace std;
class Edge{
    public:
        int u, v; long long int c;
        Edge(int u, int v, long long int c){
            this->u=u;
            this->v=v;
            this->c=c;
        }
};
const int N = 1e3 + 5;
long long int dis[N];

int main(){

    int n; long long int e;
    cin>>n>>e;
    vector<Edge> EdgeList;
    while(e--){
        int u, v; long long int c;
        cin>>u>>v>>c;
        EdgeList.push_back(Edge(u, v, c));
    }

    for(int i=0; i<N; i++){
        dis[i]=1e18;
    }

    int src; cin>>src;
    dis[src]=0;

    for(int i=1; i<=n-1; i++){
        for(Edge ed: EdgeList){
            int u, v; long long int c;
            u=ed.u;
            v=ed.v;
            c=ed.c;
            
            if(dis[u]<1e18 && dis[u]+c < dis[v]){
                dis[v]=dis[u]+c;
            }
        }
    }
    bool cycle=false;
    for(int i=1; i<=n-1; i++){
        for(Edge ed: EdgeList){
            int u, v; long long int c;
            u=ed.u;
            v=ed.v;
            c=ed.c;
            
            if(dis[u]<1e18 && dis[u]+c < dis[v]){
                cycle=true;
                break;
            }
        }
    }
    if(cycle){
        cout<<"Negative Cycle Detected"<<endl;
    }
    else{
        int testcase; cin>>testcase;
        while(testcase--){
            int d; cin>>d;
            if(dis[d] < 1e18){
                cout<<dis[d]<<endl;
            }
            else{
                cout<<"Not Possible"<<endl;
            }
        }

    }

return 0;
}