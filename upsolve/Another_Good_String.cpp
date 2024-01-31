#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

using namespace std;

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
  ll n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  ll ans = 1, curr = 1;
  char maxchar = s[0];
  loop0(i, n - 1) {
    if (s[i + 1] == s[i]) {
      curr++;
      if (curr >= ans) {
        ans = max(ans, curr);
        maxchar = s[i];
      }
    } else {
      curr = 1;
    }
  }
  vector<ll> aa;
  aa.push_back(ans);
  ll cur = 1;
  for (int i = s.size() - 1; i > 0; i--) {
    if (s[i] == s[i - 1])
      cur++;
    else
      break;
  }

  for (int j = 0; j < q; j++) {
    char c;
    cin >> c;
    if (s[s.size() - 1] == c) {
      s += c;
      cur++;
      ans = max(ans, cur);
    } else {
      s += c;
      cur = 1;
    }
    aa.push_back(ans);
  }
  // cout << ans << endl;
  debug(aa);
}