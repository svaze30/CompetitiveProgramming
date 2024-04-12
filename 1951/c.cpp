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
  ll n;
  cin >> n;
  vll a(n);
  loop0(i, n) cin >> a[i];
  map<ll, ll> mymap;

  vll hash(n + 1, 0);
  loop0(i, n) { hash[a[i]]++; }
  ll maxmex = 0;
  for (int i = 0; i <= n; i++) {
    if (hash[i] == 0) {
      maxmex = i;
      break;
    }
  }
  ll l = 0, r = n - 1;
  ll cnt = 0;
  while (l <= r) {

    if (a[l] >= maxmex or (hash[a[l]] > 1)) {
      hash[a[l]]--;
      l++;
      cnt++;
    }
    if (a[r] >= maxmex or (hash[a[r]] > 1)) {
      hash[a[r]]--;
      r--;
      cnt++;
    }
    if (cnt == 0)
      break;
    else
      cnt = 0;
  }
  // cout << l << ' ' << r << endl;
  if (maxmex == 0) {
    cout << 1 << endl;
  } else
    cout << r - l + 1 << endl;
}