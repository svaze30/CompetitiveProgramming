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
  string s;
  cin >> s;
  int srch[26] = {0};
  int neven = 0;
  for (int i = 0; i < n; i++)
  {
    srch[s[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++)
  {
    neven += srch[i] / 2;
  }
  int len = n - k;
  if (len / 2 <= neven)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}