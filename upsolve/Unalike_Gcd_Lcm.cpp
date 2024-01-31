#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;
#define MOD 1000000007
using namespace std;

void primeFactors(int n) {
  // Print the number of 2s that divide n
  while (n % 2 == 0) {
    cout << 2 << " ";
    n = n / 2;
  }

  // n must be odd at this point. So we can skip
  // one element (Note i = i +2)
  for (int i = 3; i <= sqrt(n); i = i + 2) {
    // While i divides n, print i and divide n
    while (n % i == 0) {
      cout << i << " ";
      n = n / i;
    }
  }

  // This condition is to handle the case when n
  // is a prime number greater than 2
  if (n > 2)
    cout << n << " ";
}

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
  ll x, q;
  cin >> x >> q;
  ll n = x;
  map<ll, ll> maap;
  while (n % 2 == 0) {
    maap[2]++;
    n = n / 2;
  }

  // n must be odd at this point. So we can skip
  // one element (Note i = i +2)
  for (int i = 3; i <= sqrt(n); i = i + 2) {
    // While i divides n, print i and divide n
    while (n % i == 0) {
      maap[i]++;
      n = n / i;
    }
  }

  // This condition is to handle the case when n
  // is a prime number greater than 2
  if (n > 2)
    maap[n]++;
  for (ll i = 0; i < q; i++) {
    ll ans = 1;
    ll p;
    cin >> p;
    p++;
    for (auto k : maap) {
      ll curr = 0;

      for (ll j = 1; j <= k.second; j++) {
        if (min((p * j) - k.second, k.second) == j) {
          curr++;
        }
      }
      // cout << curr << ' ';
      ans = ((ans % MOD) * (curr % MOD)) % MOD;
    }
    cout << ans << endl;
  }

  // for (auto i : maap) {
  //   cout << i.first << ' ' << i.second << endl;
  // }
}