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

// ll binarySearch(vector<ll> arr, ll l, ll r, ll x) {
//   while (l <= r) {
//     ll m = l + (r - l) / 2;

//     // Check if x is present at mid
//     if (arr[m] == x)
//       return m;

//     // If x greater, ignore left half
//     if (arr[m] < x)
//       l = m + 1;

//     // If x is smaller, ignore right half
//     else
//       r = m - 1;
//   }

//   // If we reach here, then element was not present
//   return l;
// }

ll binarySearch(vector<ll> &arr, ll target, ll low, ll high) {

  ll result = -1;

  while (low <= high) {
    ll mid = low + (high - low) / 2;

    if (arr[mid] == target) {
      // Element found
      return mid;
    } else if (arr[mid] < target) {
      // Update result and search in the right half
      result = mid;
      low = mid + 1;
    } else {
      // Search in the left half
      high = mid - 1;
    }
  }

  return result;
}

ll sum(ll a, ll n) { return (n * (2 * a - (n - 1))) / 2; }

void solve() {
  ll n, q, l, u;
  cin >> n;
  vector<ll> a(n + 1, 0);
  vector<ll> pre(n + 1, 0);
  loop1(i, n) cin >> a[i];
  loop1(i, n) { pre[i] = pre[i - 1] + a[i]; }
  // cout << endl;
  // debug(pre);
  cin >> q;
  while (q--) {
    cin >> l >> u;
    ll x = binarySearch(pre, u + pre[l - 1], l, n);
    if (x == -1) {
      cout << l << ' ';
    } else if (pre[x] == u + pre[l - 1] or x == n) {

      cout << x << ' ';
    } else {
      if (sum(u, pre[x + 1] - pre[l - 1]) > sum(u, pre[x] - pre[l - 1])) {
        cout << x + 1 << ' ';
      } else {
        cout << x << ' ';
      }
    }
  }
  // cout << endl;
  cout << endl;
}