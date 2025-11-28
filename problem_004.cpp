#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    if (!(cin >> n >> m)) return 0;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];
    vector<int> c;
    c.reserve(n + m);
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) c.push_back(a[i++]);
        else c.push_back(b[j++]);
    }
    while (i < n) c.push_back(a[i++]);
    while (j < m) c.push_back(b[j++]);
    for (int k = 0; k < (int)c.size(); k++) {
        if (k) cout << " ";
        cout << c[k];
    }
}
