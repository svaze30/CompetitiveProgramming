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
  int n, k;
  cin >> n >> k;
  int arr[n];
  int ans = 20;
  int for4 = 0;
  int for44 = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int n2 = 0;
  for (int i = 0; i < n; i++)
  {
    int c = arr[i];
    if (k == 2)
    {
      ans = min(ans, c % 2);
    }
    else if (k == 3)
    {
      if ((c) % 3 == 0)
        ans = min(ans, 0);
      else if ((c + 1) % 3 == 0)
        ans = min(ans, 1);
      else if ((c + 2) % 3 == 0)
        ans = min(ans, 2);
    }
    else if (k == 4)
    {
      if ((c) % 4 == 0)
        ans = min(ans, 0);
      else if ((c + 1) % 4 == 0)
        ans = min(ans, 1);
      else if ((c + 2) % 4 == 0)
      {
        ans = min(ans, 2);
        n2++;
      }
      else if ((c + 3) % 4 == 0)
        ans = min(ans, 3);
      if (n2 >= 2)
      {
        ans = 0;
      }
      else if (n2 == 1 && n >= 2)
      {
        ans = min(ans, 1);
      }
      else if (n2 == 0 && n >= 2)
      {
        ans = min(ans, 2);
      }
    }
    else if (k == 5)
    {
      if ((c) % 5 == 0)
        ans = min(ans, 0);
      else if ((c + 1) % 5 == 0)
        ans = min(ans, 1);
      else if ((c + 2) % 5 == 0)
        ans = min(ans, 2);
      else if ((c + 3) % 5 == 0)
        ans = min(ans, 3);
      else if ((c + 4) % 5 == 0)
        ans = min(ans, 4);
    }
  }
  cout << ans << endl;
}