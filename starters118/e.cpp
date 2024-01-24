#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

using namespace std;

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

ll high2(ll n) {
  ll ans = 1;
  while (n != 0) {
    ans *= 2;
    n /= 2;
  }
  return ans;
}

void solve() {
  ll x;
  cin >> x;
  ll temp = x;
  ll ans = 1;
  while (temp != 0) {
    ans *= 2;
    temp /= 2;
  }
  ll sec = (ans / 2) ^ x;

  ll term1 = min(ans / 2, sec);
  ll term2 = max(ans / 2, sec);

  ll a = term1, b = term2;
  ll gay = 0;
  while (a > 1 and b > 1) {
    if (a % 2 == b % 2)
      gay++;
    a /= 2;
    b /= 2;
  }
  if (gay == 0)
    cout << 1 << endl;
  else
    cout << (1 << gay) << endl;
}