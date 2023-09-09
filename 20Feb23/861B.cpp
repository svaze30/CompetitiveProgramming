#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
  int n , m;
  cin >> n >> m;
  int arr[m][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0 ; j < m ; j++) {
      cin >> arr[j][i];
    }
  }
  for (int i = 0 ; i < m ; i++) {
    sort(*(arr + i), *(arr + i) + n);
  }
  long double ans = 0;
      for (int i = 0 ; i < m ; i++) {
        int x = 1 - n;
        for (int j = 0 ; j < n/2 ; j++) {
          ans += (long double)x * ((long double)arr[i][j] - (long double)arr[i][n - j - 1]);
          x = x + 2;
        }
      }
      cout << (long long int)ans << endl;
}

int main (int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}