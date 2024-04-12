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
  string s;
  cin >> s;
  ll ans = 0;
  vector<ll> gay(n, INT_MAX);

  for (int i = 0; i < n; i++) {
    int n1 = 0, n0 = 0;
    for (int j = i; j < n; j++) {
      if (s[j] == '1') {
        n1++;
      } else
        n0++;
      if (n1 >= n0) {
        for (ll k = i; k <= j; k++) {
          if (j - i + 1 < gay[k]) {
            gay[k] = j - i + 1;
          }
        }
      }
    }
  }
  for (ll i = 0; i < n; i++) {
    if (gay[i] != INT_MAX) {
      ans += gay[i];
    }
  }

  cout << ans << endl;
}