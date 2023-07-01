#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int array[] = {-1, 2, 1, -1, -1, 3};
    int n = sizeof(array) / sizeof(int);

    int best = 0;
    
    // 1
    // for (int a = 0; a < n; a++) {
    //     for (int b = a; b < n; b++) {
    //         int sum = 0;
    //         for (int k = a; k <= b; k++) {
    //             sum += array[k];
    //         }
    //         best = max(best, sum);
    //     }
    // }

    // 2
    // for (int a = 0; a < n; a++) {
    //     int sum = 0;
    //     for (int b = a; b < n; b++) {
    //         sum += array[b];
    //         best = max(best, sum);
    //     }
    // }

    // 3
    int sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(array[k], sum+array[k]); 
        best = max(best, sum);
        cout << array[k] << " " << sum << " " << best << endl;
    }


    cout << best << endl;

}
