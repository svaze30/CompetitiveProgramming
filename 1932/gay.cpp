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

  ll mul = 1;
  vector<ll> a(n);
  vector<ll> ans;
  ll first = 0;
  loop0(i, n) { cin >> a[i]; }

  string s;
  cin >> s;
  loop0(i, n - 1) {
    if (s[i] == 'L')
      first++;
  }
  mul = a[first] % m;
  ans.pb(mul);
  int l = first, r = first;
  for (ll i = n - 2; i >= 0; i--) {
    if (s[i] == 'L') {
      mul = (mul * a[--r]) % m;
    } else {
      mul = (mul * a[++l]) % m;
    }
    ans.pb(mul);
  }
  reverse(ans.begin(), ans.end());
  debug(ans);
}