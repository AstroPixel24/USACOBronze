#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  freopen("word.in", "r", stdin);
  freopen("word.out", "w", stdout);
  
  int N, K;
  cin >> N >> K;

  int sentence = 0;
  for (int i = 0; i < N; i++) {
    string word;
    cin >> word;
    sentence = sentence + word.length();
    if (sentence > K) {
      cout << "\n" << word;
      sentence = word.length();
    } else {
      if (i != 0) {
        cout << ' ';
      }
      cout << word;
    }
  }
}