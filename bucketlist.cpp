// USACO 2018 December Contest, Bronze - Problem 2. The Bucket List

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);

	int n;
	cin >> n;
	int s[n], t[n], b[n];
	for (int i=0; i<n; i++) {
		cin >> s[i] >> t[i] >> b[i];
	}

	int max = 0;
	for (int i=0; i<n; i++) {
		if (t[i] > max) {
			max = t[i];
		}
	}
	
	int a[max] = {}; // number of buckets needed at a specific time
	int count = 0;
	for (int i=0; i<n; i++) {	
		for (int j=s[i]; j<=t[i]; j++) {
			a[j] += b[count];
		}
		count++;
	}
	sort(a, a+max);
	cout << a[max-1];
}
