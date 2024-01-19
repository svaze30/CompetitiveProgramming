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
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n);
  vector<int> b(m);
  int suma = 0, sumb = 0;
  loop0(i, n) cin >> a[i];
  loop0(i, m) cin >> b[i];
  loop0(i, n) suma += a[i];
  loop0(i, m) sumb += b[i];

  int maxa = *max_element(a.begin(), a.end());
  int mina = *min_element(a.begin(), a.end());
  int maxb = *max_element(b.begin(), b.end());
  int minb = *min_element(b.begin(), b.end());

  if (k % 2 == 0) {
    if (maxa > maxb) {
      cout << suma - maxa + maxb << endl;
    } else {
      cout << suma << endl;
    }
  } else {
    if (mina > maxb) {
      cout << suma - mina + maxb << endl;
    } else {
      cout << suma - mina + maxb << endl;
      // cout << suma << endl;
    }
  }
}