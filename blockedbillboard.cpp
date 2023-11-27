// USACO 2017 December Contest, Bronze - Problem 1. Blocked Billboard

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    
	int a1, b1, a2, b2, c1, d1, c2, d2, x1, y1, x2, y2;
	cin >> a1 >> b1 >> a2 >> b2 >> c1 >> d1 >> c2 >> d2 >> x1 >> y1 >> x2 >> y2;

	int rectA = (a2-a1)*(b2-b1);
	int rectB = (c2-c1)*(d2-d1);
	int total = rectA + rectB;

	int interA, interB;
	int inter = 0;

	if ((min(a2,x2)-max(a1,x1)) >= 0 && (min(b2,y2)-max(b1,y1)) >= 0) {
		interA = (min(a2,x2)-max(a1,x1))*(min(b2,y2)-max(b1,y1));
		inter += interA;
	}
	if ((min(c2,x2)-max(c1,x1)) >= 0 && (min(d2,y2)-max(d1,y1)) >= 0) {
		interB = (min(c2,x2)-max(c1,x1))*(min(d2,y2)-max(d1,y1));
		inter += interB;
	} 
	cout << total - inter;

}
