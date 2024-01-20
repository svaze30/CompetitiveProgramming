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
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> a(n);
  vector<ll> b(m);
  ll suma = 0, sumb = 0;
  loop0(i, n) cin >> a[i];
  loop0(i, m) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  if (k % 2 == 0) {
    if (b[m - 1] >= a[0]) {

      swap(b[m - 1], a[0]);
      if (a[n - 1] > a[0]) {
        swap(a[n - 1], b[m - 1]);
      } else {
        swap(a[0], b[m - 1]);
      }

    } else {
      swap(b[0], a[n - 1]);
    }
  } else {
    if (b[m - 1] >= a[0]) {
      swap(b[m - 1], a[0]);
    }
  }
  ll sum = 0;
  loop0(i, n) sum += a[i];
  cout << sum << endl;
}