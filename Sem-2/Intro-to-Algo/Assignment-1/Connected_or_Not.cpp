// #include <bits/stdc++.h>
// using namespace std;
// const int N= 1e5 + 5;
// vector<int> v[N];
// bool vis[N];

// void dfs(int src) {
//     vis[src] = true;
//     for (int child : v[src]) {
//         if (!vis[child]) {
//             dfs(child);
//         }
//     }
// }


// int main(){

//     int n, e;
//     cin>>n>>e;
//     while(e--){
//         int a, b;
//         cin>>a>>b;
//         v[a].push_back(b);
//     }
//     // memset(vis, false, sizeof(vis));
//     // dfs(0);

//     int q; cin>>q;

//     while(q--){
//         int x, y;
//         cin>>x>>y;
//         memset(vis, false, sizeof(vis));
//         dfs(x);
//         if(vis[y])
//             cout<<"YES"<<endl;
//         else
//             cout<<"NO"<<endl;
//     }

// return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     vector<pair<int, int>> v;
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         v.push_back({a, b});
//     }
    
//     int q; cin>>q;
//     while(q--){
//         int x, y;
//         cin>> x>>y;
//         bool flag=false;

//         // for (int i = 0; i < v.size(); i++)
//         // {
//         //     if(x==y){
//         //         flag=true;
//         //         break;
//         //     }
//         //    else if(x==v[i].first && y==v[i].second){
//         //         flag=true;
//         //         break;
//         //     }
            
//         // }

//         for(auto p: v){
//             if(x==y){
//                 flag=true;
//                 break;
//             }
//            else if(x==p.first && y==p.second){
//                 flag=true;
//                 break;
//             }
//         }
    
//         if(flag==true) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    set<pair<int, int>> s;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        // v.push_back({a, b});
        s.insert({a, b});
    }
    
    int q; cin>>q;
    while(q--){
        int x, y;
        cin>> x>>y;
        bool flag=false;

        // for (int i = 0; i < v.size(); i++)
        // {
        //     if(x==y){
        //         flag=true;
        //         break;
        //     }
        //    else if(x==v[i].first && y==v[i].second){
        //         flag=true;
        //         break;
        //     }
            
        // }

        // for(auto p: v){
        //     if(x==y){
        //         flag=true;
        //         break;
        //     }
        //    else if(x==p.first && y==p.second){
        //         flag=true;
        //         break;
        //     }
        // }

        if(x==y || s.count({x, y}) >0){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    
        // if(flag==true) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
    }
    return 0;
}