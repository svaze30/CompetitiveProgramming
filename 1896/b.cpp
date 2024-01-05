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
  vector<bool> done(n, false);
  string s;
  cin >> s;
  int last = 0, ans = 0;
  loop0(i, n - 1) {
    if (s[i] == 'B') {
      last = i + 1;
    }
    if (s[i] == 'A' && s[i + 1] == 'B') {
      ans += i + 1 - last;
      s[i + 1] = 'A';
      last = i + 1;
    }
  }
  cout << ans << endl;
}