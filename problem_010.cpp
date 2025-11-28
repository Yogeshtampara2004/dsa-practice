#include <bits/stdc++.h>
using namespace std;

void ms(vector<int> &a, int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    ms(a, l, m);
    ms(a, m + 1, r);
    int i = l, j = m + 1;
    vector<int> t;
    t.reserve(r - l + 1);
    while (i <= m && j <= r) {
        if (a[i] <= a[j]) t.push_back(a[i++]);
        else t.push_back(a[j++]);
    }
    while (i <= m) t.push_back(a[i++]);
    while (j <= r) t.push_back(a[j++]);
    for (int k = 0; k < (int)t.size(); k++) a[l + k] = t[k];
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ms(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
}
