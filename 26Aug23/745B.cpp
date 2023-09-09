#include <iostream>

using namespace std;

void solve() {
  long long int n, m, k;
  cin >> n >> m >> k ;
  if (k <= 1) {
    cout << "NO" << endl;
    return;
  }
  if (n == 1 && m == 0) {
    cout << "YES" << endl;
    return;
  }
  if (k < 3) {
    if (n == 1 && m == 0) 
      cout << "YES";
    else 
      cout << "NO";
  } else if (k == 3) {
    if (m == n * (n - 1) / 2)
      cout << "YES";
    else 
      cout << "NO";
  } else {
    if (m >= n - 1 && m <= n * (n - 1) / 2) 
      cout << "YES";
    else {
      cout << "NO";
    }
  } 
  cout << endl;
}
int main (int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
