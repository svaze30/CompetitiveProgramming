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
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < n; i++)
  {
    if (i > 0)
    {
      if (a[i] == 'A' && a[i - 1] == 'B' && b[i] == 'B' && b[i - 1] == 'A')
      {
        cout << "No" << endl;
        return;
      }
    }
    if (a[i] != 'C' && b[i] == 'C')
    {
      cout << "No" << endl;
      return;
    }
  }
  cout << "Yes" << endl;
  return;
}