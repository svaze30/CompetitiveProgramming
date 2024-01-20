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
int n, k, c[200'001];
void solve() {
  cin >> n >> k;
  loop0(i, n) cin >> c[i];
  if (n == 2 || n == 1) {
    cout << 0 << endl;
    return;
  }
  vector<int> yo(k + 1);
  vector<int> prev(k + 1);
  priority_queue<int> emp = {};
  vector<priority_queue<int>> map(k + 1, emp);
  for (int i = 0; i < n; i++) {
    if (map[c[i]].size() == 0) {
      map[c[i]].push(i);
      prev[c[i]] = i;
    } else {
      map[c[i]].push(i - prev[c[i]] - 1);
      prev[c[i]] = i;
    }
  }
  loop1(i, k) { map[i].push(n - prev[i] - 1); }
  int ans = INT_MAX;
  loop1(i, k) {
    int t = map[i].top() / 2;
    map[i].pop();
    ans = min(ans, max(t, map[i].top()));
  }
  cout << ans << endl;
}