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
  int n;
  cin >> n;
  int arr[n];
  int maxi = 0;
  int max =  INT_MAX;
  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i]; 
  }
  
  for (size_t i = 0; i < n; i++)
  {
    if (max >= arr[i]) {
      max = arr[i];
      maxi = i;
    }
  }
  int ans = 1;
  for (size_t i = 0; i < n; i++)
  {
    if (i == maxi) {
      ans = ans * (arr[i] + 1);
    } else {
      ans = ans * arr[i];
    }
  }
  cout << ans << endl;
  
}