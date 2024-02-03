#include <bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
char grid[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
vector<int> apartment;

bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == '.';
}

void bfs(int si, int sj) {
    int roomCount = 0;
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        roomCount++;

        int x = current.first;
        int y = current.second;

        
        for (const auto& dir : d) {
            int nx = x + dir.first;
            int ny = y + dir.second;
            if (isValid(nx, ny) && !vis[nx][ny]) {
                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    apartment.push_back(roomCount);
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                bfs(i, j);
            }
        }
    }

    sort(apartment.begin(), apartment.end());
    
    for (int size : apartment) {
        cout << size << " ";
    }
    if (apartment.empty()) {
        cout << "0";
    }
    cout << endl;

    return 0;
}