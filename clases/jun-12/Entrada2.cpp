#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int x;
    int sum = 0;
    while (true) {
      cin >> x;
      if (x == 0) {
        break;
      }
      sum += x;
    }
    cout << sum << endl;
  }
  return 0;
}
