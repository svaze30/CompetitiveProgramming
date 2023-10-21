#include <iostream>
#include <algorithm>

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
  int n, x;
  int arr[n];
  cin >> n >> x;
  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int curx = 0;
  int curl = 1;
  int curh = arr[0];
  int h = x;

  for (size_t i = 1; i < n; i++)
  {
    if (arr[i] == arr[i - 1])
    {
      
    } else if ((curx + ((arr[i] - curh) * curl)) >= x)
    {
      curh = curh + ((x - curx) / curl);
      cout << curh << " " << curx << " " << curl << " " << x << endl;
      return;
    }
    else
    {
      curx = curx + ((arr[i] - curh) * curl);
    }
    curh = arr[i];
    curl++;
  }

  if (curx < x)
  {
    curh = curh + ((x - curx) / n);
  }

  cout << curh << "yeh" << endl;
}