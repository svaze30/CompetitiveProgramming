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

  vector<int> a(n);
  vector<int> b(n);

  loop0(i, n) { cin >> a[i]; }
  loop0(i, n) { cin >> b[i]; }

  map<int, int> mapa;
  map<int, int> mapb;

  int prev = 0;
  int len = 1;
  loop0(i, n) {
    if (a[i] == prev) {
      len++;
      mapa[a[i]] = max(mapa[a[i]], len);
    } else {
      if (mapa.count(a[i]) == 0)
        mapa[a[i]] = 1;
      len = 1;
    }
    prev = a[i];
  }
  // for (auto i : mapa) {
  //   cout << i.first << ' ' << i.second << endl;
  // }
  // cout << endl;

  len = 1;
  prev = 0;
  loop0(i, n) {
    if (b[i] == prev) {
      len++;
      mapb[b[i]] = max(mapb[b[i]], len);
    } else {
      if (mapa.count(b[i]) == 0) {
        mapa[b[i]] = 1;
      }
      len = 1;
    }
    prev = b[i];
  }

  for (auto i : mapb) {
    cout << i.first << ' ' << i.second << endl;
  }
  cout << endl;
  // int ans = 0;
  // for (auto i : mapa) {
  //   int j = i.first;
  //   if (mapb.count(j) > 0) {
  //     ans = max(ans, i.second + mapb[i.first]);
  //   }
  // }
  // cout << ans << endl;
}