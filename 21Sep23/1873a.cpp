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
  if (s == "bca" || s == "cab") {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
}