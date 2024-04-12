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
#define MOD (ll)1000000007
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
  vector<pll> a(n);
  vector<pll> b(n);
  loop0(i, n) cin >> a[i].F;
  loop0(i, n) cin >> a[i].S;
  loop0(i, n) cin >> b[i].F;
  loop0(i, n) cin >> b[i].S;
  map<ll, ll> kmap;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      kmap[a[i].F] = a[i].S;
      kmap[-a[i].S] = a[i].F;
    } else {
      kmap[-a[i].F] = a[i].S;
      kmap[a[i].S] = a[i].F;
    }
  }
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      if (kmap[b[i].F] != b[i].S) {
      }

      if (kmap[-b[i].S] != a[i].F) {
      }
    } else {
      kmap[-a[i].F] = a[i].S;
      kmap[a[i].S] = a[i].F;
    }
  }
}