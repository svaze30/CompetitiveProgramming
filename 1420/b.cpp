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
int digits(int n) {
  int i = 0;
  while (n != 0) {
    n /= 2;
    i++;
  }
  return i;
}

void solve() {
  ll n, ans = 0;
  cin >> n;
  ll arr[n];
  loop0(i, n) cin >> arr[i];
  // unordered_map<int, int> umap;
  ll umap[33] = {0};
  loop0(i, n) { umap[digits(arr[i])]++; }

  for (int i = 0; i < 33; i++) {
    ll x = umap[i] * (umap[i] - 1) / 2;
    ans += x;
  }

  // int cnt
  cout << ans << endl;
}