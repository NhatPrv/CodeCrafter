#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

void sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);  \
    isPrime[0] = isPrime[1] = false;   

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            // Đánh dấu tất cả các bội số của i là không nguyên tố
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << endl;
        }
    }
    cout << endl;
}

int main() {
    int n;  cin >> n;
    sieveOfEratosthenes(n);
    return 0;
}