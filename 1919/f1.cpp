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
  // cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  ll n, q, c;
  cin >> n >> q;
  ll a[n], b[n];
  loop0(i, n) cin >> a[i];
  loop0(i, n) cin >> b[i];
  loop0(i, n - 1) cin >> c;
  loop0(j, q) {
    ll ans = 0, pass = 0;
    cin >> c;
    cin >> a[c - 1] >> b[c - 1];
    cin >> c;
    loop0(i, n) {
      if (pass + a[i] > b[i]) {
        ans += b[i];
        pass = a[i] + pass - b[i];
      } else {
        ans += pass + a[i];
        pass = 0;
      }
    }
    cout << ans << endl;
  }
}