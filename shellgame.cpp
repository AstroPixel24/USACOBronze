// USACO 2019 January Contest, Bronze - Problem 1. Shell Game

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
	
    int n;
    cin >> n;
    vector<int> v;
    
    int a, b, g;
    
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    
    for (int i=0; i<n; i++) {
        cin >> a >> b >> g;
        swap(v[a-1], v[b-1]);
        if (v[g-1] == 0) {
            count0++;
        } else if (v[g-1] == 1) {
            count1++;
        } else if (v[g-1] == 2) {
            count2++;
        }
    }
    
    cout << max(count0, max(count1, count2));
}

