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
  ll n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> b(n);
  loop0(i, n) cin >> a[i];
  loop0(i, n) cin >> b[i];

  vector<ll> c(n);
  loop0(i, n) { c[a[i] - 1] = b[i]; }
  // debug(c);
  for (int i = 1; i <= n; i++) {
    cout << i << ' ';
  }
  cout << endl;
  debug(c);
}