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
  string str;
  cin >> str;
  int ans = 4;
  int s[4];

  for (int i = 0; i < 4; i++)
  {
    if (str[i] == '0')
    {
      s[i] = 10;
    }
    else
    {
      s[i] = str[i] - '0';
    }
  }
  ans += s[0] - 1;
  for (int i = 1; i < 4; i++)
  {
    ans += abs(s[i] - s[i - 1]);
  }
  cout << ans << endl;
}