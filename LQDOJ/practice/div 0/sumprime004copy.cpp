#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<long long> arr(1,0);
    for (int i=2;arr.size()<1000002; i++) {
        bool kt = true;
        for (int j=2;j<=sqrt(i);j++) {
            if (i%j==0) {
                kt = false;
                break;
            }
        }
        if (kt) {
            arr.push_back(arr[arr.size()-1]+i);
        }
    }

    int t;  cin >> t;
    while (t--) {
        long long x;    cin >> x;
        cout << arr[x] << endl;
    }

    return 0;
}