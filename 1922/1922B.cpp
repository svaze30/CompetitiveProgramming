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

ll nc2(ll n, ll i) {

  ll t = i * (i - 1);
  return t / 2;
}
ll nc3(ll n, ll i) {

  ll t = i * (i - 1) * (i - 2);
  return t / 6;
}

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> times(n + 1, 0);
  loop0(i, n) cin >> a[i];

  if (n < 3) {
    cout << 0 << endl;
    return;
  }
  loop0(i, n) { times[a[i]]++; }
  // loop0(i, n + 1) { cout << times[i] << ' '; }
  // cout << endl;

  ll ans = 0;

  ll lessthan = 0;
  // ll x = *max_element(a.begin(), a.end());
  loop0(i, n + 1) {
    ll bruh2 = nc2(i, times[i]);
    ll bruh3 = nc3(i, times[i]);
    // cout << lessthan << ' ' << bruh2 << ' ' << bruh3 << endl;
    ans += (bruh2 * lessthan) + (bruh3);
    lessthan += times[i];
  }
  cout << ans << endl;
}