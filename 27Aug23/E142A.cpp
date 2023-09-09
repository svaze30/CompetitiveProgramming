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
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 1) ans++;
  }
  ans = n - ans / 2;
  cout << ans << endl;

}
