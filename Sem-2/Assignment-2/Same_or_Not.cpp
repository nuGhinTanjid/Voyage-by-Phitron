#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    queue<int> qu;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int elements;
        cin >> elements;
        st.push(elements);
    }

    for (int i = 0; i < m; i++) {
        int elements;
        cin >> elements;
        qu.push(elements);
    }

    bool flag = true;
    while (!st.empty() && !qu.empty()) {
        if (st.top() != qu.front()) {
            flag = false;
            break;
        }

        st.pop();
        qu.pop();
    }

    if (flag && st.empty() && qu.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
