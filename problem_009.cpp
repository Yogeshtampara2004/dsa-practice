#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    if (!(cin >> n >> x)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == x) {
            ans = m;
            break;
        } else if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    cout << ans;
}
