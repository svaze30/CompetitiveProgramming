#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

void solve();

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve()
{
  ll n, x, y;
  cin >> n >> x >> y;
  ll add = n / x;
  ll minus = n / y;
  ll comm = n * gcd(x, y) / (x * y);

  add -= comm;
  minus -= comm;

  ll ans = 0;
  ans -= (minus + 1) * minus / 2;

  ans += add * (n + n - add + 1) / 2;
  cout << ans << endl;
}