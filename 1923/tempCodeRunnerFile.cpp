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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n), x(n);
  vector<pair<ll, ll>> ax(n);
  loop0(i, n) cin >> a[i];
  loop0(i, n) cin >> x[i];
  loop0(i, n) ax[i] = {abs(x[i]), a[i]};
  sort(ax.begin(), ax.end());
  // for (auto i : ax) {
  //   cout << i.first << ' ' << i.S << endl;
  // }
  ll pos = 0;
  ll kk = k;

  for (int i = 0; i < n; i++) {
    if (k == 0) {
      pos--;
      k = kk;
    }

    if (ax[i].first + pos <= 0) {
      no;
      return;
    }
    if (ax[i].second > k) {
      ax[i].second -= k;
      k = 0;
      i--;
    } else if (ax[i].second <= k) {
      k -= ax[i].second;
    }
  }

  yes;
}