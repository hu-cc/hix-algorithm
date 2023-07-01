#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    long long x1, y1,
              x2, y2,
              x3, y3;
    for (int i = 0; i < t; i++) {
        cin >> x1 >> y1
            >> x2 >> y2
            >> x3 >> y3;

        long long ans = 1LL;
        if ((x1 > x2 && x1 > x3) || (x1 < x2 && x1 < x3)) {
            ans += min(abs(x1-x2), abs(x1-x3));
        }
        if ((y1 > y2 && y1 > y3) || (y1 < y2 && y1 < y3)) {
            ans += min(abs(y1-y2), abs(y1-y3));
        }

        cout << ans << endl;
    }

}