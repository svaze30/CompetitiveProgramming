#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

void solve();

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}
bool mult2(int n)
{
  if (n == 0)
    return false;

  return (ceil(log2(n)) == floor(log2(n)));
}

void solve()
{
  int n;
  cin >> n;
  int arr[n + 1];
  loop0(i, n) cin >> arr[i];
  for (int i = 1; i < n; i++)
  {
    if (i >= n)
      break;
    if (mult2(i))
    {
      continue;
    }
    if (arr[i] < arr[i - 1])
    {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}