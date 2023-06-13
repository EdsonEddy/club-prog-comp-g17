// entrada con fast IO
// cout << cnt << "\n"; //  -> no usar endl
#include <bits/stdc++.h>
using namespace std;
int main () {
  ios_base::sync_with_stdio(false); // 1
  cin.tie(NULL); // 2
  cout.tie(NULL); // 3

  unsigned t0, t1;
  t0 = clock();

  string st;
  while (cin >> st) {
    cout << st << '\n';
  }

  t1 = clock();
  double time = (double(t1-t0)/CLOCKS_PER_SEC);
  cout << fixed;
  cout << setprecision(6) << time << '\n';

  return 0;
}
