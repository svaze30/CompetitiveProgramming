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

bool isalt(string s)
{
  int n = s.length();
  for (int i = 1; i < n; i++)
  {
    if (s[i] == s[i - 1])
      return false;
  }
  return true;
}
void solve()
{
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  if (isalt(s))
  {
    cout << "YES" << endl;
    return;
  }
  else if (isalt(t))
  {
    if (t[0] == '0' && t[m - 1] == '0')
    {
      for (int i = 1; i < n; i++)
      {
        if (s[i] == s[i - 1] && s[i] == '0')
        {
          cout << "NO" << endl;
          return;
        }
      }
      cout << "YES" << endl;
      return;
    }
    else if (t[0] == '1' && t[m - 1] == '1')
    {
      for (int i = 1; i < n; i++)
      {
        if (s[i] == s[i - 1] && s[i] == '1')
        {
          cout << "NO" << endl;
          return;
        }
      }
      cout << "YES" << endl;
      return;
    }
    cout << "NO" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}