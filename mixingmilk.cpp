// USACO 2018 December Contest, Bronze - Problem 1. Mixing Milk

#include <iostream>
using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);

    int a, b, c;
    int c1, c2, c3;
    cin >> c1 >> a;
    cin >> c2 >> b;
    cin >> c3 >> c;
    
    for (int i=0; i<33; i++) {
        if (a+b>c2) {
            a=a-(c2-b);
            b=c2;
        } else {
            b=a+b;
            a=0;
        } 
        
        if (b+c>c3) {
            b=b-(c3-c);
            c=c3;
        } else {
            c=b+c;
            b=0;
        }
        
        if (c+a>c1) {
            c=c-(c1-a);
            a=c1;
        } else {
            a=c+a;
            c=0;
        }
    }
    if (a+b>c2) {
        a=a-(c2-b);
        b=c2;
    } else {
        b=a+b;
        a=0;
    }
    
    cout << a << endl << b << endl << c;
}
