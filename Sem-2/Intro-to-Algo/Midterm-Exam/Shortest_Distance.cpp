#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, e;
    cin >> n >> e;
    long long int adj[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adj[i][j]=1e18;
            if(i==j){
                adj[i][j]=0;
            }
        }
    }


    while (e--) {
        long long int a, b;
        long long int c;
        cin >> a >> b >> c;

        adj[a - 1][b - 1] = min(adj[a - 1][b - 1], c); 
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }


    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        if (adj[x - 1][y - 1] != 1e18) {
            cout << adj[x - 1][y - 1] << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
