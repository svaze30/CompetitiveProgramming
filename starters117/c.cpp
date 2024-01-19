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
  int tt = 1;
  cin >> tt;

  while (tt--)
    solve();

  return 0;
}

// bool check(ll r) {
//   ll t = (r * (r + 1));
//   t /= 2;
//   if ((t - n) % 2 == 0 && t >= n) {
//     if ((t - n) / 2 <= r) {
//       // cout << r << endl;
//       return true;
//     }
//   }
//   return false;
// }
ll a, b, n, ans;

void binarySearch(ll l = 0, ll r = 1000000) {
  while (l <= r) {
    ll m = l + (r - l) / 2;

    ll t = (m * (m + 1));
    t /= 2;

    if ((t - m) % 2 != 0) {
      binarySearch(++l, r);

    } else {
      if (t >= n) {
        if ((t - n) / 2 <= r) {
          binarySearch(m, r);
          ans = min(ans, m);
        } else
          binarySearch(l, m);
      } else {
        binarySearch(m, r);
      }
    }
  }
}

void solve() {
  cin >> a >> b;
  if (a == b) {
    cout << 0 << endl;
    return;
  }
  ans = INT_MAX;
  n = abs(a - b);
  binarySearch();
  // while (true) {
  //   ll t = (r * (r + 1));
  //   t /= 2;
  //   if ((t - n) % 2 == 0 && t >= n) {
  //     if ((t - n) / 2 <= r) {
  //       cout << r << endl;
  //       return;
  //     }
  //   }
  //   r++;
  // }
  cout << ans << endl;
}