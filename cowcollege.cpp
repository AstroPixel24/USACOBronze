// USACO 2022 December Contest Bronze - Problem 1. Cow College
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    long long max = 0;
    int store;
    
    for (int i=0; i<=n-1; i++) {
        long long total = (n-i) * arr[i];
           
        if (total > max) {
            max = total;
            store = arr[i];
        }
    }
       
    cout << max << " " << store;
}
