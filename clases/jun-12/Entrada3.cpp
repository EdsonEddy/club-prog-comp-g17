#include <bits/stdc++.h>
using namespace std;
int main () {
  int x;
  int sum = 0;
  while (cin >> x) {
    if (x != 0) {
      sum += x;
    } else {
      cout << sum << endl;
      sum = 0;
    }
  }
  return 0;
}
