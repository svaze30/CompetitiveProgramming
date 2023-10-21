#include <iostream>
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
  ll n, k;
  cin >> n >> k;
  k %= (n + 1);
  ll arr[n + 1];
  ll tot = n * (n + 1) / 2;

  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
    tot -= arr[i];
  }
  arr[n] = tot;

  for (ll i = 0, j = n - k + 1; i < n; i++, j++)
  {
    if (i == k - 1)
    {
      cout << tot << " ";
    }
    else
    {
      cout << arr[(j) % (n + 1)] << " ";
    }
  }
  cout << endl;
}