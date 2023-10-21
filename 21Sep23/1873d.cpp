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
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;
  int ans = 0;
  for (size_t i = 0; i < n; i++)
  {
    if (s[i] == 'B') {
      i = i + k -1;
      ans++;
    }
  }
  cout << ans << endl;
  
}