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
  vector<int> arr(n);
  loop0(i, n) cin >> arr[i];
  int ans = 0;
  loop1(k, n) {
    if (n % k != 0)
      continue;

    int g = 0;
    for (int i = 0; i + k < n; i++) {
      g = gcd(g, abs(arr[i + k] - arr[i]));
    }
    if (g != 1) {
      ans++;
    }
  }
  cout << ans << endl;
}