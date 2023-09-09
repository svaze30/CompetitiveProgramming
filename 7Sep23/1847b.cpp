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
  int nd;
  int ans = 0;
  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  
  for (int i = 0; i < n; i++)
  {
    if (i > 0) {
      nd = nd & arr[i];
    } else {
      nd = arr[0];
    }
    if (nd == 0 ) {
      ans++;
      if (i != n - 1)
        nd = arr[i+1];
      
    }
    if (i == n - 1 && nd != 0 && ans == 0) {
      ans++;
    }
  }
  
  cout << ans << endl;
}