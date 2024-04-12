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
  vll a(n);
  loop0(i, n) cin >> a[i];
  map<ll, ll> mymap;
  ll n2 = 0;
  for (int i = 0; i < n; i++) {
    mymap[a[i]]++;
  }
  for (auto j : mymap) {
    if (j.S == 2)
      n2++;
    if (j.S > 2) {
      cout << 0 << endl;
      return;
    }
  }
  ll maxelem = *max_element(all(a));
  if (mymap[maxelem] == 2) {
    cout << 0 << endl;
    return;
  }
  ll elems = n - n2 * 2 - 1;

  ll ans = 1;
  for (ll i = 0; i < elems; i++) {
    ans = (2 * ans) % MOD;
  }
  cout << ans << endl;
}