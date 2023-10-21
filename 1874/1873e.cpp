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
  int n;
  ll x;
  cin >> n >> x;
  ll arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  ll hi = 2'000'000'007, lo = 0;

  while (lo < hi)
  {
    ll mid = lo + (hi - lo + 1) / 2;
    ll tot = 0;
    for (size_t i = 0; i < n; i++)
    {
      tot += max((mid - arr[i]), 0LL);
    }
    if (tot <= x)
    {
      lo = mid;
    }
    else
    {
      hi = mid - 1;
    }
  }
  cout << lo << endl;
}