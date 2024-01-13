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
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> arr(n);
  loop0(i, n) cin >> arr[i];
  sort(arr.begin(), arr.end());
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (i < n - x) {
      sum += arr[i];
    } else {
      sum -= arr[i];
    }
  }
  int ans = sum;
  for (int i = 0; i < k; i++) {
    if (n - x - i - 1 >= 0)
      sum -= 2 * arr[n - x - i - 1];
    if (n - i - 1 >= 0)
      sum += arr[n - i - 1];
    ans = max(ans, sum);
  }
  cout << ans << endl;
}