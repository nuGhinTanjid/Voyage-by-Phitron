#include <bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
int dis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;
char grid[1005][1005];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j]=='#')
        return false;
    return true;
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty()) {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    
    int ai = -1, aj = -1, bi = -1, bj = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                ai = i;
                aj = j;
            } else if (grid[i][j] == 'B') {
                bi = i;
                bj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(ai, aj);
     if (vis[bi][bj] == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
