//third version
#include <iostream>
using namespace std;

void mixer(int &c1, int &m1, int &c2, int &m2) {
    if (m1 <= c2-m2) {
            m2 = m2 + m1;
            m1 = 0;
        } else {
            m1 = abs(m1-c2+m2); 
            m2 = c2;
        }
}

int main(){
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    int c1, c2, c3;
    int m1, m2, m3;
    cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;
    
    for (int i=0; i<33; i++){
        mixer(c1, m1, c2, m2);
        mixer(c2, m2, c3, m3);
        mixer(c3, m3, c1, m1);
    }
    mixer(c1, m1, c2, m2);
    
    cout << m1 << "\n" << m2 << "\n" << m3;
}