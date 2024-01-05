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
  int a[n], b[n];
  loop0(i, n) { cin >> a[i]; }
  loop0(i, n) { cin >> b[i]; }
  sort(a, a + n);
  sort(b, b + n);
  reverse(b, b + n);
  bool ans = true;
  loop0(i, n - 1) {
    if (a[i] + b[i] != a[i + 1] + b[i + 1]) {
      ans = false;
      break;
    }
  }
  if (ans) {
    loop0(i, n) { cout << a[i] << " "; }
    cout << endl;
    loop0(i, n) { cout << b[i] << " "; }
    cout << endl;
  } else {
    cout << -1 << endl;
  }
}