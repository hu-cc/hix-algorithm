#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int cnt = 0;
    while (n != m) {
        if (n > m) {
            m++;
            cnt++;
        } else if (m > n) {
            if (m % 2 == 0) {
                m/=2;
                cnt++;
            } else {
                m++;
                cnt++;
            }
        }
    }

    cout << cnt << "\n";

}