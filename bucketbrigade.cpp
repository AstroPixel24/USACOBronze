// USACO 2019 US Open Contest, Bronze - Problem 1. Bucket Brigade

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    
    char arr[10][10];
    int x1, y1, x2, y2, x3, y3;
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'B') {
                x1 = i;
                y1 = j;
            }
            if (arr[i][j] == 'L') {
                x2 = i;
                y2 = j;
            }
            if (arr[i][j] == 'R') {
                x3 = i;
                y3 = j;
            }
        }
    }
    int total = abs(x2-x1) + abs(y2-y1) - 1;
    
    if (x1 == x2 && x2 == x3) {
        if (y3 > y2 && y1 > y3) {
            total += 2;
        }
        if (y3 > y1 && y2 > y3) {
            total += 2;
        }
    }
    if (y1 == y2 && y2 == y3) {
        if (x3 > x2 && x1 > x3) {
            total += 2;
        }
        if (x3 > x1 && x2 > x3) {
            total += 2;
        }
    }

    cout << total;
}
