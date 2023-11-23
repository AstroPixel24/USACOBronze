// USACO 2019 February Contest, Bronze - Problem 3. Measuring Traffic
// kinda bad solution and repetitive solution but whatever

#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

    int n;
    cin >> n;

    string status[n];
    int min[n];
    int max[n];

    for (int i=0; i<n; i++) {
        cin >> status[i];
        cin >> min[i];
        cin >> max[i];
    }

    int count = 0;
    for (int i=0; i<n; i++) {
        if (status[i] == "none") {
            count++;
        }
    }

    int min_n[count];
    int max_n[count];

    // for calculating the beginning
    int d = 0;
    for (int i=0; i<n; i++) {
        if (status[i] == "none") {
            min_n[d] = min[i];
            max_n[d] = max[i];
            d++;
        }
    }

    d = 0;
    for (int i=0; i<n; i++) {
        if (status[i] == "none") {
            for (int j=0; j<=i; j++) {
                if (status[j] == "on") {
                    min_n[d] -= max[j];
                    max_n[d] -= min[j];
                }
                if (status[j] == "off") {
                    min_n[d] += min[j];
                    max_n[d] += max[j];
                }
            }
            d++;
        }
    }
    sort(min_n, min_n+count);
    sort(max_n, max_n+count);
    if (min_n[count-1] < 0) {
        cout << 0 << " ";
    } else {
        cout << min_n[count-1] << " ";
    }
    if (max_n[0] < 0) {
        cout << max_n[0];
    } else {
        cout << max_n[0];
    }
    cout << endl;

    // calculating at the end
    d = 0;
    for (int i=0; i<n; i++) {
        if (status[i] == "none") {
            min_n[d] = min[i];
            max_n[d] = max[i];
            d++;
        }
    }

    d = 0;
    for (int i=0; i<n; i++) {
        if (status[i] == "none") {
            for (int j=i; j<n; j++) {
                if (status[j] == "on") {
                    min_n[d] += min[j];
                    max_n[d] += max[j];
                }
                if (status[j] == "off") {
                    min_n[d] -= max[j];
                    max_n[d] -= min[j];
                }
            }
            d++;
        }
    }
    sort(min_n, min_n+count);
    sort(max_n, max_n+count);
    if (min_n[count-1] < 0) {
        cout << 0 << " ";
    } else {
        cout << min_n[count-1] << " ";
    }
    if (max_n[0] < 0) {
        cout << max_n[0];
    } else {
        cout << max_n[0];
    }
}

