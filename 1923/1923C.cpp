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
  ll n, q, l, r;
  cin >> n >> q;
  vector<ll> c(n + 1, 0);
  vector<ll> pre(n + 1, 0);
  vector<ll> ans(n + 1, 0);
  loop1(i, n) cin >> c[i];

  pre[0] = c[0];
  ans[0] = c[0];

  for (int i = 1; i <= n; i++) {
    pre[i] = pre[i - 1] + c[i];
  }

  // debug(pre);
  while (q--) {
    cin >> l >> r;
    if (l == r) {
      no;
      continue;
    }
    if (pre[r] - pre[l - 1] < 2 * r - 2 * l + 1) {
      no;
      continue;
    }
    yes;
  }
}