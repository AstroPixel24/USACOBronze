// USACO 2017 January Contest, Bronze - Problem 3. Cow Tipping

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);
    
    int n;
    cin >> n;
    int arr[n][n];
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        for (int j=0; j<n; j++) {
            arr[i][j] = s[j] - '0';
        }
    }

    int total = 0;
    for (int i=n-1; i>=0; i--) {
        for (int j=n-1; j>=0; j--) {
            if (arr[i][j] == 1) {
                total++;
                for (int k=0; k<=i; k++) {
                    for (int l=0; l<=j; l++) {
                        arr[k][l] = 1 - arr[k][l];
                    }
                }
            }
        }
    }
    cout << total;
}
