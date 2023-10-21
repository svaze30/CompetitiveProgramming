#include <iostream>

void solve();

using namespace std;

int main () {
  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  int n, k;
  cin >> n >> k;
  int arr[2][n];
  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[0][i];
  }
  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[1][i];
  }
  int maxsofar = 0;
  int l = 0, r =0;
  for (size_t i = 0; i < n; i++)
  {
    if (arr[1][i-1] % arr[1][i] == 0) {
      maxsofar += arr[0][i] ;
      if ()
    } else {

    }
  }
  
  
}