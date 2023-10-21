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
  int n, m;
  cin >> n >> m;

  vector<pair<ll, ll>> v;
  ll sum = 0;
  for (int i = 1; i <= n; i++)
  {
    ll a;
    cin >> a;

    pair<ll, ll> p = make_pair(a, a + sum);
    sum = sum + a;
    v.push_back(p);
  }
  int ans = 0;
  ll toadd = 0;
  ll toadd2 = 0;

  for (int i = 0; i < n; i++)
  {
    if (i < m - 1)
    {
      if (v[m - 1].second > v[i].second)
      {
        if (v[m - 1].first > 0)
        {
          v[m - 1].first *= -1;
          ans++;
          toadd2 = toadd2 + 2 * v[m - 1].first;
          v[i].second += toadd2;
        }
        if ((v[i].first > 0) && (v[m - 1].second > v[i].second))
        {
          v[i].first *= -1;
          ans++;
        }
      }
    }
    else if (i > m - 1)
    {
      if (v[i].second + toadd + toadd2 < v[m - 1].second)
      {
        ans++;
        toadd += -2 * v[i].first;
      }
    }
  }
  cout << ans << endl;
}