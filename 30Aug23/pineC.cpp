#include <iostream>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  int arr[n + 1];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  int miss = (n*(n+1)/2) - sum;
  arr[n] = miss;
  int ans[n+1];
  int a = k%(n+1);
  for (int i = 0; i <= n; i++) {
    ans[(i+a)%(n+1)] = arr[i];
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
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
