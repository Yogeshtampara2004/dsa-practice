#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    if (!(cin >> n >> k)) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    unordered_map<long long,long long> mp;
    mp[0] = 1;
    long long sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        auto it = mp.find(sum - k);
        if (it != mp.end()) ans += it->second;
        mp[sum]++;
    }
    cout << ans;
}
