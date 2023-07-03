#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int x = 0, y = 0, z = 0,
        xi, yi, zi;

    while (n--) {
        cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;    
    }

    if (x == 0 && y == 0 && z== 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

}