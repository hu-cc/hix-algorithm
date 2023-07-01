#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s, ans;
    getline(cin, s);

    for (size_t i = 0; i < s.size(); i++) {
        char c = tolower(s[i]);
        if ('a' == c || 'o' == c || 'y' == c|| 'e' == c 
            || 'u' == c || 'i' == c) {
            continue;
        }
        ans.push_back('.');
        ans.push_back(c);
    }

    cout << ans << endl;

}