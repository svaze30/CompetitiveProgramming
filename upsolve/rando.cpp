#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

using namespace std;

void debug(auto arr) {
  for (auto i : arr)
    cout << i << ' ';
  cout << endl;
}

void solve();

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  ll x, n;
  cin >> x >> n;
  ll ans = 1;
  for (ll i = 1; i * i <= x; i++) {
    if (x % i == 0) {
      if (x / i >= n) {
        ans = max(ans, i);
      }
      if (i >= n) {
        ans = max(ans, x / i);
      }
    }
  }
  // for (ll i = n;; i++) {
  //   if (x % i == 0) {
  //     ans = x / i;
  //     break;
  //   }
  // }
  cout << ans << endl;
}