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
  ll n, m, k;
  cin >> n >> m >> k;
  vll a(n), b(m);
  map<ll, ll> mymap;
  map<ll, pll> mmp;
  loop0(i, n) cin >> a[i];
  loop0(i, m) cin >> b[i];
  loop0(i, m) { mymap[b[i]]++; }
  for (auto i : mymap) {
    mmp[i.F] = {i.S, 0};
  }

  ll ans = 0;
  ll cnt = 0;
  for (int i = 0; i < m; i++) {
    if (mymap.find(a[i]) != mymap.end()) {
      mmp[a[i]].S++;
      if (mmp[a[i]].S <= mmp[a[i]].F)
        cnt++;
    }
  }
  if (cnt >= k)
    ans++;

  for (int i = 0; i + m < n; i++) {
    if (mymap.find(a[i + m]) != mymap.end()) {
      mmp[a[i + m]].S++;
      if (mmp[a[i + m]].S <= mmp[a[i + m]].F)
        cnt++;
    }
    if (mymap.find(a[i]) != mymap.end()) {
      mmp[a[i]].S--;
      if (mmp[a[i]].S < mmp[a[i]].F)
        cnt--;
    }
    if (cnt >= k)
      ans++;
  }
  cout << ans << endl;
}