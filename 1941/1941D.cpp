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

void solve() {
  int n, m, x;
  cin >> n >> m >> x;
  vector<vector<ll>> dp(m + 1, vector<ll>(n + 1, 0));

  dp[0][x] = 1;

  for (int i = 0; i < m; i++) {
    int a;
    char c;
    cin >> a;
    cin >> c;

    for (int j = 1; j <= n; j++) {
      if (dp[i][j] == 1) {
        if (c == '?') {
          x = (j + a) % n;
          if (x == 0)
            x = n;
          dp[i + 1][x] = 1;
          x = (j + n - a) % n;
          if (x == 0)
            x = n;
          dp[i + 1][x] = 1;
        } else if (c == '0') {
          x = (j + a) % n;
          if (x == 0)
            x = n;
          dp[i + 1][x] = 1;
        } else {
          x = (j + n - a) % n;
          if (x == 0)
            x = n;
          dp[i + 1][x] = 1;
        }
      }
    }
    debug(dp[i]);
  }

  vector<ll> ans;

  loop1(i, n) {
    if (dp[m][i] == 1)
      ans.push_back(i);
  }

  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " \n"[i == ans.size() - 1];
  }
}