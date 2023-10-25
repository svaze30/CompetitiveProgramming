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
  int n, m;
  cin >> n >> m;
  int a[n];
  int b[n];
  a[0] = 1;
  for (int i = 1; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  sort(a, a + n);
  sort(b, b + n);
  int ans = 0;
  int i = 0, j = 0;
  while (j < n)
  {
    if (a[i] < b[j])
    {

      i++;
      j++;
    }
    else
    {
      ans++;
      j++;
    }
  }
  cout << ans << endl;
}