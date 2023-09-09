#include <iostream>
#include <cmath>

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
  int a, b ,c ;
  cin >> a >> b >> c;
  int ans = abs(a-b) / (2*c);
  int rem = abs(a-b) - ans * c * 2;
  if (rem != 0) {
    ans++;
  }
  cout << ans << endl;
}