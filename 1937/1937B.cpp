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
  ll n;
  cin >> n;
  string a, b;
  cin >> a >> b;
  ll ans = 1;
  for (ll i = 0; i < n; i++) {
    if (i != n - 1) {
      if (a[i + 1] == b[i]) {
        ans++;
      } else if (a[i + 1] == '0' and b[i] == '1') {
        ans = 1;
      }
      if (a[i + 1] == '1' and b[i] == '0') {
        cout << a.substr(0, i + 1) << b.substr(i, n - i + 1) << endl;
        cout << ans << endl;
        return;
      }
    } else {
      cout << a.substr(0, i + 1) << b.substr(i, n - i + 1) << endl;
      cout << ans << endl;
      return;
    }
  }
}