#include <bits/stdc++.h>
using namespace std;
char a[1005][1005];
bool vis[1005][1005];
vector<pair<int , int> > d={{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m || a[i][j]=='-')
        return false;
   
    return true;
}

void sameComponent(int si,int sj){
    vis[si][sj]=true;
    for(int i=0; i<4; i++){
        int ci=si+d[i].first;
        int cj=sj+d[i].second;
        if(valid(ci, cj) ==true && vis[ci][cj]==false){
            sameComponent(ci, cj);
        }
    }
}

int main(){

    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    
    int si, sj, di, dj;
    cin>>si>>sj>>di>>dj;
    si-1; sj-1; di-1; dj-1;
    memset(vis, false, sizeof(vis));
    sameComponent(si, sj);

    if(vis[di][dj]==true){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
return 0;
}