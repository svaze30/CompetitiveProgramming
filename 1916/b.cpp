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
  ll a, b;
  cin >> a >> b;
  ll gcd = __gcd(a, b);
  if (a == 1 || b == 1) {
    cout << (a * b) * (a * b) << endl;
    return;
  } else if (gcd == 1) {
    cout << a * b << endl;
    return;
  } else {
    ll ans = gcd;
    a /= gcd;
    b /= gcd;
    if (a == 1 || b == 1) {
      ans *= (a * b) * (a * b);
    } else {
      ans *= a * b;
    }
    cout << ans << endl;
    return;
  }
}