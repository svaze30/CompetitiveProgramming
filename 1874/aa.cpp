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
  long long int a, b, n;
  cin >> a >> b >> n;
  long long int arr[n];
  long long int ans = b;
  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] >= a)
      ans += a - 1;
    else
      ans += arr[i];
  }
  cout << ans << endl;
}