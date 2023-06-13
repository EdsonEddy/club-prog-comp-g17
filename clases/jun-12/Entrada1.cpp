#include <bits/stdc++.h>
using namespace std;
int main () {
  int t;
  cin >> t; // console-input > cin

  for (int i = 0; i < t; ++i) {
    int m;
    cin >> m;
    int sum = 0;
    for (int j = 0; j < m; ++j){
      int x;
      cin >> x;
      sum += x; // sum = sum + x, para varios operadores(*, /, -)
    }
    cout << sum << endl;  // endl, salto de linea
  }
  return 0;
}

// para compilar en sublime, Ctrl + b
// ./input1 < ejemplo.txt > salida.txt