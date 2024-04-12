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
  k--;
  vi a(n, 0);
  loop0(i, n) cin >> a[i];
  ll ans = 0;
  // swap to first and then get what is the ans {
  swap(a[0], a[k]);
  for (ll i = 1; i < n; i++) {
    if (a[i] < a[0]) {
      ans++;
    } else
      break;
  }
  swap(a[0], a[k]);
  //}
  if (k != 0 and a[0] < a[k]) {
    ll firstbig = k;
    for (ll i = 0; i < n; i++) {
      if (a[i] > a[k]) {
        firstbig = i;
        break;
      }
    }
    swap(a[k], a[firstbig]);
    ll x = 0;
    for (ll i = firstbig; i < n; i++) {
      if (a[i] <= a[firstbig]) {
        ans = max(ans, ++x);
      } else
        break;
    }
  }
  cout << ans << endl;
}