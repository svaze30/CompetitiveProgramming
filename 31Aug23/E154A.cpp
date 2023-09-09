#include <iostream>

void solve();

using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}

void solve() {
    string s;
    cin >> s;
  int num1, num3;
  for (int i = 0; i < 9; i++) {
    if (s[i] == '1') {
      num1 = i;
    }
    if (s[i] == '3') {
      num3 = i;
    }
  }
  if (num1 > num3) {
    cout << 31 << endl;
  } else {
    cout << 13 << endl;
  }
    
}
