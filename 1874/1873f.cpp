#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

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
  ll k;
  cin >> n >> k;
  int a[n];
  ll h[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> h[i];
  }
  int p1 = 0;
  int p2 = 0;
  int maxn = 0;
  int curn = 0;
  ll sum = 0;
  deque<int> di;

    cout << maxn << endl;
}