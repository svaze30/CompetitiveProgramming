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
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int k = arr[0];
  int l = arr[n - 1];
  if (k == l)
  {
    cout << "YES" << endl;
    return;
  }
  int nk = 0;
  int nl = 0;
  for (size_t i = 0; i < n; i++)
  {
    if (arr[i] == k)
      nk++;
    if (arr[i] == l)
      nl++;
  }
  // cout << nk << " " << nl << " ";
  if (nk + nl == n && abs(nk - nl) <= 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}