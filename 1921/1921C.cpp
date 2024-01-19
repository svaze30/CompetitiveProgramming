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
  ll n, f, a, b;
  cin >> n >> f >> a >> b;

  vector<ll> m(n + 1, 0);

  loop1(i, n) cin >> m[i];

  ll curr = f;

  loop1(i, n) {
    if (curr <= 0) {
      cout << "NO" << endl;
      return;
    } else
      curr = curr - min((m[i] - m[i - 1]) * a, b);
  }
  if (curr <= 0)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}