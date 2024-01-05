#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

// #define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

void solve();

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin >> t;

  while (t--)
    solve();

  return 0;
}

int bruh(int a, string s) {
  int n = s.length(), k = 0;
  for (int i = 0; i < n; i++) {
    if (i < a)
      k += s[i] - '0';
    else
      k -= s[i] - '0';
  }
  return k;
}

void solve() {
  int n;
  cin >> n;
  vector<string> s(n);
  loop0(i, n) cin >> s[i];
  ll ans = 0;
  for (int len = 2; len <= 10; len += 2) {
    vector<map<int, int>> mp(6);
    loop0(i, n) {
      reverse(s[i].begin(), s[i].end());
      (mp[(s[i]).length()])[bruh(len / 2, s[i])]++;
    }
    loop0(i, n) {
      reverse(s[i].begin(), s[i].end());
      int a = len - ((s[i]).length());
      if (1 <= a && a <= 5)
        ans += mp[a][bruh(len / 2, s[i])];
    }
  }
  cout << ans << endl;
}