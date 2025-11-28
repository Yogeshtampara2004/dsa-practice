#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    if (!(cin >> n >> target)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int need = target - a[i];
        auto it = mp.find(need);
        if (it != mp.end()) {
            cout << it->second << " " << i;
            return 0;
        }
        mp[a[i]] = i;
    }
    cout << -1;
}
