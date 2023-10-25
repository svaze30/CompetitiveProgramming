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

int n;
int arr[10001];
int XOR = 0;
int XOR0 = 0;

void solve1(int l, int r)
{
  for (size_t i = l; i <= r; i++)
  {
    XOR0 = XOR0 ^ arr[i];
  }
}

int solve2(int g)
{
  if (g == 0)
    return XOR0;
  return XOR ^ XOR0;
}

void solve()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    XOR = XOR ^ arr[i];
    if (i == n)
      XOR0 = XOR;
  }
  string s;
  cin >> s;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '0')
    {
      XOR0 = XOR0 ^ arr[i];
    }
  }

  int q;
  cin >> q;
  while (q--)
  {
    int choice;
    cin >> choice;
    if (choice == 1)
    {
      int l, r;
      cin >> l >> r;
      solve1(l, r);
    }
    else
    {
      int g;
      cin >> g;
      cout << solve2(g) << " ";
    }
  }
  cout << endl;
}