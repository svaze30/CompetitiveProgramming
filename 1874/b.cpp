#include <iostream>
#define ll long long
void solve();

using namespace std;

ll int minn(ll int a, ll int b)
{
  if ((a - b) > 0)
    return b;
  return a;
}
ll int maxn(ll int a, ll int b)
{
  if ((a - b) > 0)
    return a;
  return b;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve()
{
  ll int n, m, k;
  cin >> n >> m >> k;
  ll int a[n];
  ll int b[m];
  long long int mina = INT_MAX;
  long long int maxb = INT_MIN;
  long long int maxa = INT_MIN;
  ll int sum = 0;
  for (size_t i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
    mina = minn(mina, a[i]);
    maxa = maxn(maxa, a[i]);
  }
  for (size_t i = 0; i < m; i++)
  {
    cin >> b[i];
    maxb = maxn(maxb, b[i]);
  }
  if (k % 2 == 0)
  {
    cout << sum + maxb - maxa << endl;
  }
  else
  {
    if (mina > maxb)
    {
      cout << sum << endl;
    }
    else
    {
      cout << sum + maxb - mina << endl;
    }
  }
}