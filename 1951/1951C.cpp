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
#define all(x) x.begin(), x.end()

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
  ll n, m, k;
  cin >> n >> m >> k;

  vector<ll> a(n);

  loop0(i, n) cin >> a[i];

  sort(all(a));
  vector<ll> buy(n, 0);

  ll kk = k, ans = 0, bought = 0;
  for (int i = 0; i < n; i++) {
    buy[i] = min(m, kk);
    kk -= buy[i];
  }
  for (int i = n - 1; i >= 0; i--) {
    ans += bought * buy[i];
    bought += buy[i];
    ans += buy[i] * a[i];
  }

  cout << ans << endl;
}