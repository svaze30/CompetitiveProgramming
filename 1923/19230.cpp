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
  ll nz = 0;

  ll s = 0, e = 0;
  ll first = 0;
  vector<ll> a(n, 0);
  loop0(i, n) {
    ll k;
    cin >> k;
    if (k == 1) {
      a[i] = 1;
      if (first == 0) {
        first++;
        s = i;
      }
      e = i;
    }
  }
  for (ll i = s; i <= e; i++) {
    if (a[i] == 0)
      nz++;
  }
  // cout << s << e << endl;
  cout << nz << endl;
}