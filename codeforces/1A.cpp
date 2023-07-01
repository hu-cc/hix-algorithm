#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n, m, a;
    cin >> n >> m >> a;

    long long ans = ceil((double) n/a) * ceil((double) m/a);
    cout << ans << endl;

}
