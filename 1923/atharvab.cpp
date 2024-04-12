#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define MOD 1000000007

void solve();

void debug(auto arr) {
  for (auto i : arr)
    cout << i << ' ';
  cout << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}

void solve() {
  ll n, q;
  cin >> n >> q;
  vector<ll> v;
  vector<ll> psum(n + 1, 0);
  vector<ll> v2;
  vector<ll> psum2(n + 1, 0);

  ll sum = 0;
  ll temp;
  ll s = 0;
  for (ll i = 0; i < n; i++) {
    cin >> temp;
    sum += temp;
    v.push_back(temp);
    psum[i + 1] = (sum);
    if (temp == 1) {
      v2.push_back(2);
      s += 2;
    } else {
      v2.push_back(1);
      s += 1;
    }
    psum2[i + 1] = (s);
  }
  // debug(v);
  // debug(psum);
  // debug(v2);
  // debug(psum2);
  int l, r;

  for (int i = 0; i < q; i++) {
    cin >> l >> r;
    if (l == r) {
      cout << "NO\n";
      continue;
    }
    int s = psum2[r] - psum2[l - 1];
    int sum = psum[r] - psum[l - 1];
    if (sum < s) {
      cout << "NO"
           << "\n";
    } else {
      cout << "YES\n";
    }
  }
}