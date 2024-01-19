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

  for (int i = 1; i <= t; i++) {

    solve();
  }

  return 0;
}

void solve() {
  int n;
  cin >> n;

  vector<int> a(n + 1);
  vector<int> b(n + 1);

  loop1(i, n) { cin >> a[i]; }
  loop1(i, n) { cin >> b[i]; }

  vector<int> mapa(2 * n + 1, 0);
  vector<int> mapb(2 * n + 1, 0);

  int prev = 1;
  for (int i = 2; i <= n; i++) {
    if (a[i] != a[i - 1]) {
      mapa[a[i - 1]] = max(mapa[a[i - 1]], i - prev);
      prev = i;
    }
  }
  mapa[a[n]] = max(mapa[a[n]], n - prev + 1);
  prev = 1;
  for (int i = 2; i <= n; i++) {
    if (b[i] != b[i - 1]) {
      mapb[b[i - 1]] = max(mapb[b[i - 1]], i - prev);
      prev = i;
    }
  }
  mapb[b[n]] = max(mapb[b[n]], n - prev + 1);
  int ans = 0;
  loop1(i, 2 * n) ans = max(ans, mapa[i] + mapb[i]);
  cout << ans << endl;
}