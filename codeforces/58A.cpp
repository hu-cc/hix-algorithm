#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string hello = "hello";
    string s;
    getline(cin, s);

    string ans = "NO";
    unsigned int j = 0;
    for (size_t i = 0; i < s.size(); i++) {
        if (hello[j] == s[i]) {
            j++;
        }
        if (j == hello.size()) {
            ans = "YES";
            break;
        }
    }

    cout << ans << "\n";
}