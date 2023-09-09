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
  string a, b;
  cin >> a >> b;
  int n = a.length();
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] == '0' && b[i] == '0' && a[i+1] == '1' && b[i+1] == '1') {
      cout << "YES" << endl;
      return;
    }
  }
  
  cout << "NO" << endl;
}