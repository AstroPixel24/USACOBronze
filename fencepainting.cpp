#include <iostream>
using namespace std;

int main() {
  freopen("paint.in", "r", stdin);
  freopen("paint.out", "w", stdout);

  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int total = d - c + b - a;
  int combine = max(min(b, d) - max(a, c), 0);
  cout << abs(total - combine);
}   