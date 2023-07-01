#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    /**
     * 1. 整型
     * int, 32-bit
     * long long, 64-bit
     * __int128_t, 128-bit
    */
    // long long x = 123456789123456789LL;
    // int a = 123456789;
    // 常见错误：未执行类型，导致相乘后类型超过限制
    // long long b = a*a;
    // long long b = (long long)a*a;
    // cout << b << endl;

    /**
     * 2. mod
    */

    /**
     * 3. 浮点数
     * double, 64-bit
     * long double, 80-bit
    */
    // 输出指定的精度
    // double x = 2.9;
    // printf("%.9f\n", x);
  
    // 精度丢失
    double x = 0.3*3 + 1;
    printf("%.20f\n", x); // output: 1.89999999999999991118

    // 比较两个double，最好用abs
    double y = 0.1*9 + 1;
    printf("%.20f\n", y); // output: 1.89999999999999991118
    // if (x == y)
    //     printf("true");
    if (abs(x-y) < 1e-9) {
        printf("true");
    }

  
}
