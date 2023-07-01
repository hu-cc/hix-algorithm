#include <bits/stdc++.h>

using namespace std;

long long recurse(long long);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    long long n;
    while (t--) {
        cin >> n;
        cout << recurse(n) << endl;
    }

}

long long recurse(long long i) {
    if (i == 1) {
        return 1;
    }
    if (i % 2 == 1) {
        return 1 + recurse(i-1);
    } else {
        return i + recurse(i/2);
    }
}
