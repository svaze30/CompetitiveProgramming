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
  ll a[n];
  vector<ll> b(m);
  loop0(i, n) cin >> a[i];
  loop0(i, m) cin >> b[i];
  ll mx = *max_element(b.begin(), b.end());

  sort(a + n - mx, a + n);

  loop0(i, n) cout << a[i] << " ";
  cout << endl;
}