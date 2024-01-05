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
  ll n, x, y;
  cin >> n >> x >> y;
  // if (y % 3 != 0) {
  //   cout << "NO" << endl;
  //   return;
  // } else {
  //   ll a = y / 3;
  //   x -= a;
  //   if (x < 0 || x % 2 != 0) {
  //     cout << "NO" << endl;
  //     return;
  //   } else {
  //     cout << "YES" << endl;
  //     return;
  //   }
  // }
  ll a = y / 3;
  if (a <= x) {
    n -= a;
    x -= a;
  } else {
    n -= x;
    x -= x;
  }
  if (x > 0) {
    n -= x / 2;
  }
  if (n > 0) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}