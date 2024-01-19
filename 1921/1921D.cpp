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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n), b(m);
  loop0(i, n) cin >> a[i];
  loop0(i, m) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  deque<ll> aa;
  deque<ll> bb;
  int sa = 0, sb = 0, ea = n - 1, eb = m - 1;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (abs(a[sa] - b[eb]) >= abs(a[ea] - b[sb])) {
      ans += abs(a[sa++] - b[eb--]);
    } else {
      ans += abs(a[ea--] - b[sb++]);
    }
  }
  cout << ans << endl;
}