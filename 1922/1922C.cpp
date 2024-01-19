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
  ll n;
  cin >> n;
  vector<ll> a(n + 2);
  vector<ll> left(n + 2);
  vector<ll> right(n + 2);
  loop1(i, n) cin >> a[i];
  a[0] = INT_MIN;
  right[1] = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] - a[i - 1] < a[i + 1] - a[i]) {
      right[i + 1] = right[i] + a[i + 1] - a[i];
    } else {
      right[i + 1] = right[i] + 1;
    }
  }
  left[n] = 0;
  a[n + 1] = INT_MAX;
  for (int i = n; i >= 1; i--) {
    if (a[i] - a[i - 1] < a[i + 1] - a[i]) {
      left[i - 1] = left[i] + 1;
    } else {
      left[i - 1] = left[i] + a[i] - a[i - 1];
    }
  }
  // for (int i = 1; i <= n; i++) {
  //   cout << left[i] << ' ';
  // }
  // cout << endl;
  // for (int i = 1; i <= n; i++) {
  //   cout << right[i] << ' ';
  // }
  // cout << endl;

  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    if (x > y) {
      cout << left[y] - left[x] << endl;
    } else {
      cout << right[y] - right[x] << endl;
    }
  }
}