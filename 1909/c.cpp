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
  ll arr[2 * n];
  ll l[n];
  ll r[n];
  ll c[n];
  // loop0(i, 2 * n) { cin >> arr[i]; }
  loop0(i, n) { cin >> l[i]; }
  loop0(i, n) { cin >> r[i]; }
  loop0(i, n) { cin >> c[i]; }
  // sort(arr, arr + 2 * n);
  sort(c, c + n);
  sort(l, l + n);
  ll narr[n];
  sort(r, r + n);
  loop0(i, n) { narr[i] = r[i] - l[i]; }
  sort(narr, narr + n);
  ll ans = 0;
  loop0(i, n) { ans += c[n - i - 1] * (narr[i]); }
  cout << ans << endl;
}