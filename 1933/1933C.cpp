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
ll countDivisors(ll n) {
  ll cnt = 0;
  for (ll i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      // If divisors are equal,
      // count only one
      if (n / i == i)
        cnt++;

      else // Otherwise count both
        cnt = cnt + 2;
    }
  }
  return cnt;
}

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
  ll a, b, l;
  cin >> a >> b >> l;
  ll sum = 0;
  // ll bb = 1;
  set<ll> ans;
  for (ll aa = 1; aa <= l; aa = aa * a) {
    for (ll bb = 1; bb <= l; bb = bb * b) {
      if (l % (aa * bb) == 0) {

        sum++;
        ans.insert(l / (aa * bb));
      } else
        break;
    }
    if (aa > l)
      break;
  }
  // cout << sum << endl;
  cout << ans.size() << endl;
}