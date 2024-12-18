#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, b; cin >> a >> b;
    bool remember = false;
    vector<char> ans;
    int i = a.size()-1, j = b.size()-1;
    while (i >= 0 && j >= 0) {
        int curr = (int)a[i]-48 + (int)(b[j]) - 48;
        if (remember == true) {
            curr += 1;
            remember = false;
        }
        if (curr >= 10) {
            remember = true;
            curr -= 10;
        } 
        ans.push_back(char(curr+48));
        i--; j--;
    }
    while (i>=0) {
        int curr = (int)a[i]-48;
        if (remember == true) {
            curr += 1;
            remember = false;
        }
        if (curr >= 10) {
            remember = true;
            curr -= 10;
        }
        ans.push_back(char(curr+48));
        i--;
    }
    while (j>=0) {
        int curr = (int)b[j]-48;
        if (remember == true) {
            curr += 1;
            remember = false;
        }
        if (curr >= 10) {
            curr -= 10;
            remember = true;
        } 
        ans.push_back(char(curr+48));
        j--;
    }
    if (remember == true) ans.push_back('1');
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }

    return 0;
}