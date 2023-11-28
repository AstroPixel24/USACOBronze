// USACO 2016 US Open Contest, Bronze - Problem 1. Diamond Collector

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n, k;
    cin >> n >> k;
    int s[n];
    for (int i=0; i<n; i++) {
        cin >> s[i];
    }
    sort(s, s+n);

    int max = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i; j++) {
            if ((s[i+j]-s[i])<=k) {
                if (j>max) {
                    max = j;
                }
            }
        }
    }
    cout << max+1;
}
