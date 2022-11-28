#include <iostream>
using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    int c1, m1, c2, m2, c3, m3;
    cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;

    for (int i=0; i<33; i++){
        if (m1 <= c2-m2) {
            m2 = m2 + m1;
            m1 = 0;
        } else {
            m1 = abs(m1-c2+m2); 
            m2 = c2;
        }
         if (m2 <= c3-m3) {
            m3 = m3 + m2;
            m2 = 0;
        } else {
            m2 = abs(m2-c3+m3);
            m3 = c3;
        } 
        if (m3 <= c1-m1) {
            m1 = m1 + m3;
            m3 = 0;
        } else {
            m3 = abs(m3-c1+m1);
            m1 = c1;
        }
    }
        if (m1 <= c2-m2) {
            m2 = m2 + m1;
            m1 = 0;
        } else {
            m1 = abs(m1-c2+m2); 
            m2 = c2;
        }


    cout << m1 << "\n" << m2 << "\n" << m3;
}