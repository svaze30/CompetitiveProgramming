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

string s;

ll ans(int st, char prev) {
  if (st == s.length())
    return 1;
  if (s[st] == prev) {
    return 1 + ans(st + 1, prev);
  } else {
    return ans(st + 1, prev) + ans(st + 1, s[st]);
  }
}

void solve() {
  int n;
  cin >> n;
  cin >> s;
  if (s.length() == 1) {
    cout << 1 << endl;
    return;
  }
  cout << ans(1, s[0]) << endl;
}