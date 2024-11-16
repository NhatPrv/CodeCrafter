#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b, c;
    cin >> a >> b >> c;
    long long sum = a + b + c;
    long long sum2 = a*a + b*b + c*c;
    cout << "Tong ba so: " << sum << endl;
    cout << "Tong binh phuong ba so: " << sum2;

    return 0;
}