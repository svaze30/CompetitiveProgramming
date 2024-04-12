#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

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
  cin >> n >> k;
  k = 2 * k;
  vector<int> a(2 * n);
  loop0(i, 2 * n) cin >> a[i];
  map<int, int> mapl, mapr;
  vector<int> l, r;
  loop0(i, n) {
    mapl[a[i]]++;
    mapr[a[i + n]]++;
  }
  for (int i = 1; i <= n; i++) {
    if (mapl[i] == 1) {
      l.pb(i);
      r.pb(i);
    }
  }
  if ((2 * k - l.size()) % 2 != 0) {
    l.pop_back();
    r.pop_back();
  }
  for (auto i : mapl) {
    if (i.S == 2) {
      l.pb(i.F);
      l.pb(i.F);
    }
  }
  for (auto i : mapr) {
    if (i.S == 2) {
      r.pb(i.F);
      r.pb(i.F);
    }
  }
  for (int i = 0; i < k; i++) {
    cout << l[i] << " \n"[i == k - 1];
  }
  for (int i = 0; i < k; i++) {
    cout << r[i] << " \n"[i == k - 1];
  }
}