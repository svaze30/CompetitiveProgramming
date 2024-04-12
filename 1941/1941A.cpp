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
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n), b(n);
  loop0(i, n) cin >> a[i];
  loop0(i, m) cin >> b[i];
  int ans = 0;
  loop0(i, n) {
    loop0(j, m) {
      if (a[i] + b[j] <= k)
        ans++;
    }
  }
  cout << ans << endl;
}