    #pragma GCC optimize("O3,unroll-loops")
    #include <bits/stdc++.h>
    using namespace std;

    // code by #CodeCrafters_Nholl (danglongnhat)

    int main ()  {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n;    cin >> n;
        int a = -1, b = -1;
        for (int i = 0; i < n; i++) {
            long long x;    cin >> x;
            if (x < 0) {
                if (a == -1) {
                    a = i+1;
                    b = i+1;
                } else b = i+1;
            }
        }
        cout << a << " " << b;
        return 0;
    }