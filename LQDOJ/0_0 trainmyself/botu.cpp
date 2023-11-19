#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int demUoc(int n) {
    int dem = 0;
    for (int i=1;i*i<=n;i++) {
        if (n%i==0) dem+=2;
        if (i*i==n) dem--;
    }
    return dem;
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    int dem = 0;
    if (n%2 == 0) {
        dem+=demUoc(n/2);
        dem*=dem;
    }
    for (int i = 1; i <= (n-1)/2; i++) {
        dem+= 2*(demUoc(i)*demUoc(n-i));
    }
    cout << dem;  

    return 0;
}