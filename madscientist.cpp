// USACO 2020 February Contest, Bronze - Problem 2. Mad Scientist

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);

    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int count = 0;
    while (a != b) {
        int max = 0; // length of longest mismatched string
        int length = 0; // length of current mismatched string 
        int pos = 0; // index of longest mismatched string
        for (int i=0; i<n; i++) {
            if (a[i] != b[i]) {
                length++;
            } else {
                if (length > max) {
                    max = length;
                    pos = i - length;
                }
                length = 0;
            }
        }
        if (length > max) {
            max = length;
            pos = n - length; 
        }
        for (int i=pos; i<pos+max; i++) {
            b[i] = a[i];
        }
        count++;
    }
    cout << count;
}
