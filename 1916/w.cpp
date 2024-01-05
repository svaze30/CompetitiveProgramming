#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

void solve();

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}
int alicelis(int A[], int N) {
  int count = 1;
  int last = A[0];
  for (int i = 1; i < N; i++) {
    if (A[i] > last) {
      count++;
      last = A[i];
    }
  }
  return count;
}

void solve() {
  int n, x;
  cin >> n >> x;
  if (n == x) {
    cout << -1 << endl;
    return;
  } else if (x == 0) {
    loop1(i, n) cout << i << " ";
    cout << endl;
    return;
  } else if (n - x == 1) {
    cout << -1 << endl;
    return;
  } else {
    loop1(i, n - 1) {
      if (i == n - 1 - x) {
        cout << n << " ";
      }
      cout << i << " ";
    }
    cout << endl;
  }
}