#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, h;   cin >> a >> h;
    for (int i=0;i<h;i++) {
        for (int j=0;j<i;j++) cout << " ";
        for(int j=0;j<a;j++) {
            if (j == a-1) cout << "*";
            else cout << "* ";
        }
        cout << endl;
    }

    return 0;
}