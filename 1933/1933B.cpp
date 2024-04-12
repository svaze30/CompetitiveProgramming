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
  ll n;
  cin >> n;
  vector<ll> a(n);
  loop0(i, n) cin >> a[i];
  ll sum = 0;
  loop0(i, n) sum += a[i];
  ll div2 = 0;
  ll div3 = 0;
  ll div1 = 0;

  loop0(i, n) {
    if (a[i] % 3 == 1)
      div1++;
    if (a[i] % 3 == 2)
      div2++;
  }
  if (sum % 3 == 0) {
    cout << 0 << endl;
  } else if (sum % 3 == 1 and div1 > 0) {
    cout << 1 << endl;
  } else if (sum % 3 == 2) {
    cout << 1 << endl;
  } else {
    cout << 2 << endl;
  }
}