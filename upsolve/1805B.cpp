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
  string s;
  cin >> s;
  int min = 0;
  loop0(i, n) {
    if (s[i] <= s[min]) {
      min = i;
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] == s[min]) {
      min = i;
      break;
    }
  }
  string ans = "";
  ans += s[min];
  loop0(i, n) {
    if (i != min)
      ans += s[i];
  }
  cout << ans << endl;
}