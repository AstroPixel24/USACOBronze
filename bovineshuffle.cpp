// USACO 2017 December Contest, Bronze - Problem 2. The Bovine Shuffle

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

	int n;
	cin >> n;
	int arr[n]; // switching positions of cows
	int id[n];

	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	for (int i=0; i<n; i++) {
		cin >> id[i];
	}

	int shuffle1[n];
	int shuffle2[n];
	int shuffle3[n];
	for (int i=0; i<n; i++) {
		shuffle1[i] = id[arr[i]-1];
	}
	for (int i=0; i<n; i++) {
		shuffle2[i] = shuffle1[arr[i]-1];
	}
	for (int i=0; i<n; i++) {
		shuffle3[i] = shuffle2[arr[i]-1];
	}

	for (int val : shuffle3) {
		cout << val << endl;
	}
}
