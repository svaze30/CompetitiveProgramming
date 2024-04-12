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

  while (t--)
    solve();

  return 0;
}

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n + 2, 0);
  vector<ll> dp(n + 2, 0);
  vector<ll> dp2(n + 1, 0);
  loop1(i, n) cin >> a[i];
  dp[0] = 1;
  for (int i = 2; i <= n + 1; i++) {
    if (dp[i - 2] == 1 and dp[i - 1] == 0) {
      if (a[i - 1] < a[i]) {
        dp[i - 1] = 1;
      } else {
        dp[i] = 1;
      }
    } else if (dp[i - 2] == 0 and dp[i - 1] == 0) {
      if (a[i - 2] < a[i - 1]) {
        dp[i - 2] = 1;
      } else {
        dp[i - 1] = 1;
      }
    }
  }
  ll ans = 0;
  loop1(i, n) if (dp[i] == 1) ans += a[i];
  debug(dp);

  std::cout << ans << endl;
}