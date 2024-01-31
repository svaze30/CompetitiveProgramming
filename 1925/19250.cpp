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
  int n, k;
  string let = "abcdefghijklmnopqrstuvwxyz";
  cin >> n >> k;
  string s = "";
  string b = "", ans = "";
  for (int i = k - 1; i >= 0; i--) {
    s += let[i];
  }
  for (int i = 0; i < k; i++) {
    b += let[i];
  }

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      ans.append(s);
    else
      ans.append(b);
  }
  cout << ans << endl;
}