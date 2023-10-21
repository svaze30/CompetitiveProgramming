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
  char arr[10][10];
  for (size_t i = 0; i < 10; i++)
  {
    for (size_t j = 0; j < 10; j++)
    {
      cin >> arr[i][j];
    }
    
  }
  int ans = 0;
  for (size_t i = 0; i < 10; i++)
  {
    for (size_t j = 0; j < 10; j++)
    {
      if (arr[i][j] == 'X') {
        if (i > 3 && i < 6 && j < 6 && j > 3) {
          ans += 5;
        } else if (i > 2 && i < 7 && j < 7 && j > 2) {
          ans += 4;
        } else if (i > 1 && i < 8 && j < 8 && j > 1) {
          ans += 3;
        } else if (i > 0 && i < 9 && j < 9 && j > 0) {
          ans += 2;
        } else {
          ans ++;
        }
      }
    }
  }
  cout << ans << endl;
}