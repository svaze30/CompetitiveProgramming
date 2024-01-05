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
  // cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  ll n, t;
  cin >> n;
  unordered_map<ll, ll> unmap;
  unordered_map<ll, ll>::iterator it;
  ll ans = n * (n - 1) / 2;
  loop0(i, n) {
    cin >> t;
    unmap[t]++;
  }
  for (it = unmap.begin(); it != unmap.end(); it++)
    ans -= (it->second) * (it->second - 1) / 2;
  cout << ans << endl;
}