// USACO 2018 February Contest, Bronze - Problem 1. Teleportation

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int one = abs(a-x)+abs(b-y);
    int two = abs(a-y)+abs(b-x);
    int three = abs(b-a);
    cout << min(one, min(two, three));
}
