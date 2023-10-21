#include <bits/stdc++.h>
#define endl "\n"

void solve();

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}

void solve()
{
  int n;
  cin >> n;
  cout << 4 + 3 * n << endl;
  cout << "0 0" << endl
       << "0 1" << endl;
  int i;
  int c = 0;
  for (i = 1; i <= n; i++)
  {
    cout << i << " " << c << endl;
    cout << i << " " << c + 1 << endl;
    cout << i << " " << c + 2 << endl;
    c++;
  }
  cout << i << " " << c << endl;
  cout << i << " " << c + 1 << endl;
}