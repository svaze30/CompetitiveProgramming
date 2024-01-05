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
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  int n;
  cin >> n;
  ll arr[n], pre[n] = {0};
  loop0(i, n) {
    cin >> arr[i];
    if (i > 0)
      pre[i] = pre[i - 1] + arr[i];
    else
      pre[0] = arr[0];
  }

  ll sum1 = 0, sum2 = 0, ans = -1;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      ll maxterm = INT64_MIN;
      ll minterm = INT64_MAX;
      ll prev = 0;
      for (int j = 0; j < n; j += i) {
        ll term = 0;
        for (int k = j; k < j + i; k++) {
          term += arr[k];
        }

        maxterm = max(maxterm, term);
        minterm = min(minterm, term);
      }
      // cout << i << " " << maxterm << " " << minterm << endl;
      ans = max(ans, abs(maxterm - minterm));
    }
  }

  cout << ans << endl;
}