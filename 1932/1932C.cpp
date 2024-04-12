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
  ll n, m;

  cin >> n >> m;

  ll mul = 0;
  vector<ll> a(n);
  vector<ll> pre(n, 1);

  loop0(i, n) { cin >> a[i]; }
  for (int i = 1; i < n; i++) {
    pre[i] = (pre[i - 1] * a[i]) % m;
  }

  loop0(i, n) mul *= a[i];

  string s;
  cin >> s;

  int l = 0, r = n - 1;

  for (int i = 0; i < n; i++) {
    cout << (mul % m) << ' ';
    if (s[i] == 'L') {
      l++;
      if (l != 0 and pre[l - 1] != 0)
        mul = pre[r] / pre[l - 1];

    } else {
      r--;
      if (l != 0 and pre[l - 1] != 0)
        mul = pre[r] / pre[l - 1];
    }
  }
  cout << endl;
}