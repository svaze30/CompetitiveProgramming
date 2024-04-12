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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  loop0(i, n) cin >> a[i];
  ll best = 0;
  ll sum = 0;
  ll tsum = accumulate(a.begin(), a.end(), 0ll);
  for (int i = 0; i < n; i++) {
    sum = max(a[i], sum + a[i]);
    best = max(best, sum);
  }
  ll remsum = tsum - best;
  ll gsum = best;
  for (int i = 0; i < k; i++) {
    gsum = (gsum + best) % MOD;
    best = (gsum) % MOD;
  }

  cout << (((remsum + gsum) % MOD) + MOD) % MOD << endl;
}