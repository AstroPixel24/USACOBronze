//USACO 2016 December Contest, Bronze - Problem 3. The Cow-Signal

#include <iostream>
using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);
	
    int m, n, k;
    cin >> m >> n >> k;
    
    for (int i=0; i<m; i++) {
        string s;
        cin >> s;
        for (int i=0; i<k; i++) {
            int count = 1;
            int max = 0;
            for (int i=0; i<n-1; i++) {
                if (s[i] == s[i+1]) {
                    count++;
                }
                if (s[i] != s[i+1]) {
                    for (int j=0; j<count*k; j++) {
                        cout << s[i];
                    }
                    count = 1;
                }
            }
            int count2 = 1;
            for (int i=1; i<n+1; i++) {
                if (s[n-i] == s[n-(i+1)]) {
                    count2++;
                } else {
                    for (int j=0; j<count2*k; j++) {
                        cout << s[n-i];
                    }
                    break;
                }
            }
            cout << endl;
        }
    }
}
