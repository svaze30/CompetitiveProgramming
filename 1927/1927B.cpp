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
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> vis(n, false);
  char ans[n + 1];
  ans[n] = '\0';
  loop0(i, n) cin >> a[i];
  for (int i = 0; i < 26; i++) {
    int x = 0;
    loop0(j, n) {
      if (a[j] == x and vis[j] == false) {
        ans[j] = char('a' + i);
        vis[j] = true;
        x++;
      }
    }
  }
  cout << ans << endl;
}