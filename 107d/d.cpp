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
  int n, na = 0, nb = 0;
  cin >> n;
  string a, b;
  cin >> a;
  cin >> b;
  for (int i = 0; i < n; i++) {
    if (a[i] == b[i]) {

    } else if ((a[i] == 'R' && b[i] == 'S') || (a[i] == 'P' && b[i] == 'R') ||
               (a[i] == 'S' && b[i] == 'P')) {
      na++;
    } else {
      nb++;
    }
  }
  // cout << na << " " << nb << endl;
  int draw = n - na - nb;
  int ans = 0;
  if (na > nb) {
    ans = 0;
  } else if (na == nb) {
    ans = 1;
  } else {

    ans = (nb - na) / 2 + 1;
  }
  cout << ans << endl;
}