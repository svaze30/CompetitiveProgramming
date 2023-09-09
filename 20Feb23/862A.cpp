#include <iostream> 

using namespace std;

int lucky(int a) {
  int max1 = 0;
  int min1 = 9;
  while (a != 0) {
    int lastdigit = a % 10;
    max1 = max(lastdigit, max1);
    min1 = min(lastdigit, min1);
    a = a/10;
  }
  return max1 - min1;
}

void solve() {
  int l , r;
  cin >> l >> r;
  int maxlucky = 0;
  int maxnum = l;
  for (int i = l; i <= r; i++) {
    int x = lucky(i);
    if (x == 9) {
      cout << i << endl;
      return;
    }
    if (x >= maxlucky) {
      maxnum = i;
      maxlucky = x;
    }
  }
  cout << maxnum << endl;
}
 int main (int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
 }
