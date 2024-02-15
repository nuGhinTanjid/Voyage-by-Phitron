#include <bits/stdc++.h>
using namespace std;
bool vis[105][105];
int dis[105][105];
int n, m;
vector<pair<int,int>> d={{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void kinghtMove(int ki, int kj){
    queue<pair<int, int>> q;
    q.push({ki, kj});
    vis[ki][kj]=true;
    dis[ki][kj]=0;

    while(!q.empty()){
        pair<int, int> par=q.front();
        int a=par.first, b=par.second;
        q.pop();

        for(int i=0; i<8; i++){
            int ci=a+d[i].first;
            int cj=b+d[i].second;

            if(valid(ci, cj)==true && vis[ci][cj]==false){
                q.push({ci, cj});
                vis[ci][cj]=true;
                dis[ci][cj] = dis[a][b] + 1;
            }

        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m;      
        
        
        int ki, kj;
        cin>>ki>>kj;

        int qi, qj;
        cin>>qi>>qj;

        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));

        kinghtMove(ki, kj);

        if(vis[qi][qj]==true){
            cout<<dis[qi][qj]<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }

    

return 0;
}