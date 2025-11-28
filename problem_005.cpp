#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    if (!getline(cin, s)) return 0;
    if (s.size() == 0 && !getline(cin, s)) return 0;
    reverse(s.begin(), s.end());
    cout << s;
}
