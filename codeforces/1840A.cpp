#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    string s;
    cin >> t;

    while (t--) {
        cin >> n;
        cin >> s;

        char ch = s[0];
        for (int i = 1; i < n; i++) {
            if (ch == s[i]) {
                cout << ch;
                ch = s[i+1];
                i++;
            }
        }

        cout << endl;
    }
}