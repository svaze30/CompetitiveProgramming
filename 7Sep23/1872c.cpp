#include <iostream>
#include <algorithm>
#include <cmath>

void solve();

using namespace std;

int main () {
  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void ans(int n) {
  int j = sqrt(n);
  for (size_t i = 3; i <= j; i++)
  {
    // int ans = __gcd(i, n - i);
    // if (ans != 1) {
    //   cout << i  << " " << n - i << endl;
    //   return;
    // }
    if (n % i == 0) {
      cout << i << " " << n - i<< endl;
      return;
    } 
  }
  cout << -1 << endl;
  
}

void solve() {
  int l, r;
  cin >> l >> r;
  if (l >= 1 && r <= 3) {
    cout << -1 << endl;
    return;
  }
  if (r - l == 1)
  {
    if (r % 2 == 0) {
      cout << r/2 << " " << r/2 << endl;
      return;
    } else {
      cout << l/2 << " " << l/2 << endl;
      return;
    }
  } else if (r == l) {
    if (r % 2 == 0) {
      cout << r/2 << " " << r/2 << endl; 
      return;
    } else {
      ans(r);
      return;
    }
  } else {
    if (r % 2 == 0) {
      cout << r/2 << " " << r/2 << endl;
    } else {
      cout << (r-1)/2 << " " << (r-1)/2 << endl;
    }
    return;
  }
  
}