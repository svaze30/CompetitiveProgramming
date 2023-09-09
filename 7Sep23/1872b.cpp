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
  int n;
  cin >> n;
  int d[n];
  int s[n];
  for (int i = 0; i < n; i++)
  {
    cin >> d[i] >> s[i];
  }
  int k = INT_MAX;
  for (size_t i = 0; i < n; i++)
  {
    if (true) {
      k = min(k, d[i] + (s[i] -1)/2);
    }
  }
  cout << k << endl;
  
}