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

ll countDivisibles(ll A, ll B, ll M) {

  // Add 1 explicitly as A is divisible by M
  if (A % M == 0)
    return (B / M) - (A / M) + 1;

  // A is not divisible by M
  return (B / M) - (A / M);
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
  ll n, x;
  cin >> n >> x;
  if (n % 2 != x % 2) {
    cout << 0 << endl;
    return;
  }
  ll k1 = (n - x + 2) / 2;
  ll k2 = (n + x) / 2;
  ll ans = 0;
  set<ll> s;
  cout << k1 << ' ' << k2 << endl;

  for (ll i = 1; i * i <= k1; i++) {
    if (k1 % i == 0) {
      cout << i << ' ' << k1 / i << endl;
      if (k1 / i >= x) {
        s.insert(k1 / i);
      }
      if (i >= x) {
        s.insert(i);
      }
    }
  }
  for (ll i = 1; i * i <= k2; i++) {
    if (k2 % i == 0) {
      cout << i << ' ' << k2 / i << endl;
      if (k2 / i >= x) {
        s.insert(k2 / i);
      }
      if (i >= x) {
        s.insert(i);
      }
    }
  }
  cout << s.size() << endl << endl;
}