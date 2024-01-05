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
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  int t = 1;
  // cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  int n;
  cin >> n;
  int a[n - 1];
  loop0(i, n - 1) cin >> a[i];
  int b[n];
  int p[n];
  p[0] = 0;
  int ans = 0;
  loop0(i, n - 1) { p[i + 1] = a[i] ^ p[i]; }
  loop0(i, n - 1) ans = ans ^ a[i];

  // loop0(i, n) { cout << (p[i]) << " "; }
  // cout << endl;

  loop0(d, 30) {
    int x = 0;
    loop0(i, n) {
      if (p[i] & (1 << d))
        x++;
      else
        x--;
    }
    if (x > 0)
      loop0(i, n) p[i] ^= (1 << d);
  }
  loop0(i, n) { cout << (p[i]) << " "; }
}