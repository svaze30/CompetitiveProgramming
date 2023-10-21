#include <bits/stdc++.h>
#define endl "\n"

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
  cin >> n;
  if (n == 3)
  {
    cout << "NO" << endl;
  }
  else if (n % 2 == 1)
  {
    cout << "YES" << endl;
    int t = n;
    while (t--)
    {
      if (t & 1)
        cout << -(n / 2) << " ";
      else
        cout << n / 2 - 1 << " ";
    }
    cout << endl;
  }
  else
  {
    cout << "YES" << endl;
    while (n--)
    {
      if (n & 1)
        cout << -1 << " ";
      else
        cout << 1 << " ";
    }
    cout << endl;
  }
}