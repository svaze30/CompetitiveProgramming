#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

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
  ll n;
  cin >> n;
  vector<ll> a(n);
  loop0(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  vector<ll> sec = {a[0]};

  for (ll i = 1; i < n; i++) {
    if (a[i] != a[i - 1]) {
      sec.pb(a[i]);
    }
  }
  ll x = 0, y = 0;
  ll m = sec.size();
  ll ans = 0;
  ll curr = 0;
  while (y < m and x < m) {
    if (sec[y] - sec[x] < n) {
      curr++;
      ans = max(ans, curr);
      y++;
    } else {
      x++;
      curr--;
    }
  }
  cout << ans << endl;
}