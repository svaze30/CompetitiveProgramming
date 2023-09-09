#include <iostream>
#include <algorithm>

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
  int n, x, y;
  cin >> n >> x >> y;
  int a = n / x;
  int b = n / y;
  int r = n * __gcd(x, y) / (x*y);
  a -= r;
  b -= r;
  // long long int ans1 = a * (2 * n - a + 1) /2;
  // long long int ans2 = b * (b + 1) / 2;
  int k;
  long long int ans = 0;
  if (a < b) {
    for (size_t i = 0; i < a; i++)
  {
    ans += (n-i);
    ans -= (i+1);
  } 
  for (int i = a; i < b; i++)
  {
    ans -= (i+1);
  }
  
  } else {
    for (size_t i = 0; i < b; i++)
    {
     ans += (n-i);
     ans -= (i+1); 
    }
    for (size_t i = b; i < a; i++)
    {
      ans += (n - i);
    }
    
    
  }
  
  
  
  cout << ans << endl;

}