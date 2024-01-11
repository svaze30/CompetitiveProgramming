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

ll binarySearch(ll l, ll r, ll x) {
  while (l <= r) {
    int m = l + (r - l) / 2;

    // Check if x is present at mid
    if (m == (ll)sqrt(x))
      return m;

    // If x greater, ignore left half
    if (m < (ll)sqrt(x))
      l = m + 1;

    // If x is smaller, ignore right half
    else
      r = m - 1;
  }

  // If we reach here, then element was not present
  return l;
}

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
  ll n;
  cin >> n;
  // cout << binarySearch(1, 1000000000, n) << endl;
  ll yo = (ll)sqrtl(n);
  // cout << yo << endl;
  if (n % 2 == 0) {
    cout << yo / 2 << endl;
  } else {
    cout << (yo + 1) / 2 << endl;
  }
}