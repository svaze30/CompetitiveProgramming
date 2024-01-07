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
  int n, s, r;
  cin >> n >> s >> r;
  vector<int> arr(n, 1);
  arr[0] = s - r;
  int ans = s - r + n - 1;
  for (int i = 1; i < n; i++) {
    int l = min(s - r - 1, s - ans);
    ans += l;
    arr[i] += l;
  }
  loop0(i, n) cout << arr[i] << " ";

  cout << endl;
}