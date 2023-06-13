#include <bits/stdc++.h>
using namespace std;
int main () {
  int m;
  while (cin >> m) {
    if (m != 0) {
      int sum = 0;
      for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        sum += x;
      }
      cout << sum << endl;
    } else {
      break;
    }
  }
  return 0;
}