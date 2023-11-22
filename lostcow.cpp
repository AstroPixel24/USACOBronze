// USACO 2017 US Open Contest, Bronze - Problem 1. The Lost Cow

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y; // x is farmer john initial position, y is bessie position
    cin >> x >> y;

    int temp = 0; // next position that farmer john would (ideally) travel to
    int d = 0; // distance traveled
    int i = 0;
    int pos = x; // current position of farmer john       

    while (pos != y) {
        if (i % 2 == 0) {
            temp = x + pow(2, i);
        } else {
            temp = x - pow(2, i);
        }

        if (y > pos) {
            if (temp == y || temp > y) {
                d += y-pos;
                pos = y;
            } else {
                d += abs(temp-pos);
                pos = temp;
            } 
        } else if (pos > y) {
            if (temp == y || temp < y) {
                d += pos-y;
                pos = y;
            } else {
                d += abs(temp-pos);
                pos = temp;
            } 
        } 
        i++;
    }
    cout << d;
}
