#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;
    vector<int> last(256, -1);
    int best = 0, start = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        int c = (unsigned char)s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        best = max(best, i - start + 1);
    }
    cout << best;
}
