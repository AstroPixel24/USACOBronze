// USACO 2016 February Contest, Bronze - Problem 2. Circular Barn

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
	
	int n;
	cin >> n;

	int arr[n];
	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	// defining the new array that we draw values from
	int newA[2*n-1];
	for (int i=0; i<n; i++) {
		newA[i] = arr[i];
	}
	for (int i=n; i<2*n-1; i++) {
		newA[i] = arr[i-n];
	}
	
	//simulation
	int total = 0;
	int min = INT_MAX;
	for (int i=0; i<n; i++) {
		for (int j=i; j<i+n; j++) {
			total += newA[j] * (j-i);
		}
		if (min > total) {
			min = total;
		}
		total = 0;
	}

	cout << min;
}
