#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int, int>
#define pll pair<ll, ll>

void debug(auto arr) {
  for (auto i : arr)
    cout << i << ' ';
  cout << endl;
}

void solve();

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
  ll n, k;
  cin >> n >> k;
  vll a(n);
  loop0(i, n) cin >> a[i];
  ll l = 0, r = n - 1;
  bool front = true;
  while (k > 0 and l <= r) {
    if (k < a[l] and k < a[r])
      break;
    if (l == r) {
      if (k >= a[l]) {
        a[l] -= 0;
        l++;
        break;
      }
    }
    if (front) {

      if (a[l] <= a[r]) {
        if (k < 2 * a[l] - 1)
          break;
        k -= 2 * a[l] - 1;
        a[r] -= a[l] - 1;
        a[l] = 0;
        l++;
        front = false;
      } else {
        if (k < 2 * a[r])
          break;
        a[l] -= a[r];
        k -= 2 * a[r];
        a[r] = 0;
        r--;
      }
    } else {

      if (a[r] <= a[l]) {
        if (k < 2 * a[r] - 1)
          break;
        k -= 2 * a[r] - 1;
        a[l] -= a[r] - 1;
        a[r] = 0;
        r--;
        front = true;
      } else {
        if (k < 2 * a[l])
          break;
        a[r] -= a[l];
        k -= 2 * a[l];
        a[l] = 0;
        l++;
      }
    }
    // debug(a);
    // cout << k << ' ' << l << ' ' << r << endl;
  }
  cout << n - max(0ll, r - l + 1) << endl;
}
