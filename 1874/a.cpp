#include <iostream>

void solve();

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve()
{
  int a, b, n;
  cin >> a >> b >> n;
  int arr[n];
  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int ans = b;

  for (size_t i = 0; i < n; i++)
  {
    if (arr[i] >= a - 1)
    {
      ans += a - 1;
    }
    else
    {
      ans += arr[i];
    }
  }
  cout << ans << endl;
}