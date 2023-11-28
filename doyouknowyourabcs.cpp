// USACO 2020 December Contest, Bronze - Problem 1. Do You Know Your ABCs?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[7];
    for (int i=0; i<7; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+7);
    cout << arr[0] << " "; // min
    cout << arr[1] << " "; // second smallest
    cout << arr[6]-arr[1]-arr[0]; // c = (a+b+c)-a-b
}
