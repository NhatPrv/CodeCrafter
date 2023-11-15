#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

//  code by #CodeCrafters_Nholl (danglongnhat)

void usingfile()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void solve()
{
    int n;
    cin >> n;
    ll max = 0;
    int index = -1;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x > max)
        {
            max = x;
            index = i;
        }
    }
    cout << max << endl
         << index;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // usingfile();
    solve();

    return 0;
}