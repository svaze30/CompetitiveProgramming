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
  int arr[n][n];
  string clr[n];
  // for (int i = 0 ; i < n ; i++) {
  //     cin >> clr[i];
  // }
  // for (int i = 0 ; i < n ; i++) {
  //   for (int j = 0 ; j < n ; j++) {
  //     if (clr[i][j] == '0') {
  //       arr[i][j] == 0;
  //       cout << 0 ;
  //     } else {
  //       arr[i][j] == 1;
  //       cout << 1;
  //     }
  //   }
  //   cout << endl;
  // }
  for (int i = 0; i < n; i++)
  {
  for (int j = 0 ; j < n ; j ++)  {
    cin >> arr[i][j];
  }

  }
  
  int ans = 0;
  for (size_t i = 0; i < n ; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      if (arr[i][j] % 2 == 1) { 
        if (i != n - 1) {
          arr[i+1][j] ++;
          if ( j != 0) arr[i+1][j - 1] ++;
          if (j != n -1) arr[i+1][j + 1] ++;
        }
        
        ans++;
      }
      // if (arr[i][j] % 2 == 0 && arr[i][j] != 0) {
      //   arr[i+1][j] ++;
      //   if ( j != 0) arr[i+1][j - 1] ++;
      //   if (j != n -1) arr[i+1][j + 1] ++;
      // }
    }
  }
  // for (int i = 0 ; i < n ; i++) {
  //   if (arr[n-1][i] % 2 == 1) ans++;
  // }
  cout << ans << endl;
  
}