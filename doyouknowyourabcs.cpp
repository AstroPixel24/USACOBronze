#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int arr[7];
  for (int i=0; i<7; i++) {
    cin >> arr[i];
  }
  sort(arr,arr+7);
  cout << arr[0] << " ";
  cout << arr[1] << " ";
  cout << arr[6] - arr[0] - arr[1];

}