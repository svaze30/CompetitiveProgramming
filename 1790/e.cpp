#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

void solve();

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  int64_t x;
  cin >> x;
  int64_t a = x, b = 0;
  for (int64_t i = 32; i >= 0; i--) {
    if ((x & (1 << i)) > 0)
      continue;
    if ((x << 1) >= (2 << i) + a + b) {
      a += (1 << i);
      b += (1 << i);
    }
  }
  if ((a + b == (x << 1)) && ((a ^ b) == x)) {
    cout << a << " " << b << endl;
  } else {
    cout << -1 << endl;
  }
}