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
#define all(x) x.begin(), x.end()

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
  vector<ll> arr;
  for (ll i = 1; i <= sqrtl(n); i++) {
    if (n % i == 0) {
      arr.pb(i);
      if (n / i != i)
        arr.pb(n / i);
    }
  }
  sort(all(arr));
  cout << (n / arr[1]) << ' ' << (n / arr[1]) * (arr[1] - 1) << endl;
}