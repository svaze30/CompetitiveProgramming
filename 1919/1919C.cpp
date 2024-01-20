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
  vector<int> a(n), a1, a2;
  loop0(i, n) cin >> a[i];
  a1.push_back(n + 1);
  a2.push_back(n + 1);
  int ans = 0;

  loop0(i, n) {
    if (a1.back() > a2.back()) {
      if (a[i] > a1.back()) {
        a2.push_back(a[i]);
        ans++;
      } else if (a[i] > a2.back()) {
        a1.push_back(a[i]);
      } else {
        a2.push_back(a[i]);
      }
    } else {
      if (a[i] > a2.back()) {
        a1.push_back(a[i]);
        ans++;
      } else if (a[i] > a1.back()) {
        a2.push_back(a[i]);
      } else {
        a1.push_back(a[i]);
      }
    }
  }
  cout << ans << endl;
}