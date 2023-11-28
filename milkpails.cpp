// USACO 2016 February Contest, Bronze Problem 1. Milk Pails

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x, y, m;
    cin >> x >> y >> m;

    int high = 0;
    for (int i=0; i<=m/y; i++) {
        int t = (m-i*y)/x; // # of X pails
        high = max(high, t*x+i*y);
    }
    cout << high;
}
