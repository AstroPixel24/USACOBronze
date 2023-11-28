// USACO 2016 January Contest, Bronze - Problem 1. Promotion Counting

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int b1, b2, s1, s2, g1, g2, p1, p2;
    cin >> b1 >> b2 >> s1 >> s2 >> g1 >> g2 >> p1 >> p2;

    int s = 0, g = 0, p = 0;
    s = s + (s2-s1) + (g2-g1) + (p2-p1);
    g = g + (g2-g1) + (p2-p1);
    p = p + (p2-p1);

    cout << s << endl << g << endl << p;
}
