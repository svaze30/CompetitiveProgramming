#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

void solve();

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve()
{
  int n;
  cin >> n;
  ll a[n];
  loop0(i, n) cin >> a[i];
  sort(a, a + n);
  ll x = 0, ans = 0;
  ;
  int e = n - 1;
  int s = 0;
  while (s <= e)
  {
    if (x + a[s] >= a[e])
    {
      ans += (a[e] - x);
      a[s] -= ans;
      e--;
      ans++;
      // x = 0;
    }
    else
    {
      x += a[s];
      s++;
      ans += a[s];
    }
  }

  cout << a[s] << " " << a[e] << " " << x << endl;
  cout << ans << endl;
}