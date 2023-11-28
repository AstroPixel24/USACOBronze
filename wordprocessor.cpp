// USACO 2020 January Contest, Bronze - Problem 1. Word Processor

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k;
    cin >> n >> k;
    string arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int remain = k;
    for (int i=0; i<n; i++) {
        if (remain >= arr[i].length()) {
            if (i != 0) {
                cout << " ";
            }
            cout << arr[i];
            remain = remain - arr[i].length();
        } else {
            cout << endl;
            cout << arr[i];
            remain = k - arr[i].length();
        }
    }
}
