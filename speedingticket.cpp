// USACO 2015 December Contest, Bronze - Problem 2. Speeding Ticket

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n, m;
    cin >> n >> m;
   
    int d=0;
    int x, y;
    int s[100]; // speed limits
    for (int i=0; i<n; i++) {
        cin >> x;
        cin >> y;
        for (int j=d; j<d+x && j<100; j++) {
            s[j] = y;
        }
        d+=x;
    }
   
    d=0;
    int s1[100]; // bessie's speeds
    for (int i=0; i<m; i++) {
        cin >> x;
        cin >> y;
        for (int j=d; j<d+x && j<100; j++) {
            s1[j] = y;
        }
        d+=x;
    }
   
   
    int max = 0;
    for (int i=0; i<100; i++) {
        if (s1[i] > s[i]) {
            if (s1[i]-s[i] > max) {
                max = s1[i]-s[i];
            }
        }        
    }


    cout << max;
}
