// Entrada estandar
#include <bits/stdc++.h>
using namespace std;
int main () {
  unsigned t0, t1;
  t0 = clock();

  string st;
  while (cin >> st) {
    cout << st << endl;
  }

  t1 = clock();
  double time = (double(t1-t0)/CLOCKS_PER_SEC);
  cout << fixed;
  cout << setprecision(6) << time << endl;

  return 0;
}
