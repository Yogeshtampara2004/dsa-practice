#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    if (!(cin >> s >> t)) return 0;
    if (s.size() != t.size()) {
        cout << "NO";
        return 0;
    }
    vector<int> cnt(256);
    for (char c : s) cnt[(unsigned char)c]++;
    for (char c : t) cnt[(unsigned char)c]--;
    for (int x : cnt) {
        if (x != 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
