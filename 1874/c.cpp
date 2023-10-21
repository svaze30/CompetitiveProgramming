#include <iostream>

void solve();

using namespace std;

int istwomult(int n)
{
  int x = 1;
  int i = 0;
  while (x <= n)
  {
    if (x == n)
      return i;
    x *= 2;
    i++;
  }
  return -1;
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
  int n, m;
  cin >> n >> m;
  if (n % m == 0)
  {
    cout << 0 << endl;
    return;
  }
  n = n % m;
  int ans = 0;
  int mult = 1;
  while (n % 2 == 0 && m % 2 == 0)
  {
    n /= 2;
    m /= 2;
    mult *= 2;
  }
  if (m % n == 0)
  {
    m /= n;
    n /= n;
    mult *= n;
  }
  int jj = istwomult(m);

  if (jj != -1)
  {
    int N = n;
    int M = m;
    while (N != 0)
    {
      int lastd = N & 1;
      if (lastd == 1)
      {
        ans += (M - 1);
      }
      M = M / 2;
      N = N / 2;
    }
  }
  else
  {
    cout << -1 << endl;
  }
  cout << n << " " << m << " " << ans << " " << mult << endl;
}