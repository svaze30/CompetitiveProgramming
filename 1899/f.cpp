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
  int n, q;
  cin >> n >> q;
  int d[q];
  loop0(i, q) cin >> d[i];
  loop1(i, n - 1) { cout << i << " " << i + 1 << endl; }
  int prev = n - 1;
  for (int i = 0; i < q; i++) {
    if (prev == d[i])
      cout << "-1 -1 -1\n";
    else
      cout << n << " " << prev << " " << d[i] << endl;
    prev = d[i];
  }
}