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

void solve() {
  ll a, b;
  cin >> a >> b;
  if (a == b) {
    cout << 0 << endl;
    return;
  }
  ll n = abs(a - b);
  ll i = (ll)sqrt(n) / 2;
  ll tot = (i * (i - 1)) / 2;

  for (ll i = 1;; i++) {
    ll t = (i * (i + 1)) / 2;

    if (t < n)
      continue;
    if ((t - n) % 2 != 0)
      continue;
    if ((t - n) <= 2 * i) {
      cout << i << endl;
      return;
    }
  }
  // cout << ans << endl;
}