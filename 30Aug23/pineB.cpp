#include <iostream>

using namespace std;

void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int num = 1;
  int i;
  int ans = 0;
  while (num != n) {
    
  
  for (i = 0; i < n; i++) {
    if (num == arr[i]) {
      arr[i] = 0;
      num++;
    }
  }ans++;
  }
  cout << ans << endl;
}

int main (int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
