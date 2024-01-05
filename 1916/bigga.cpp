#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)
#define MOD 1000000007

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
  ll n, m;
  cin >> n >> m;
  string arr[n];
  loop0(i, n) cin >> arr[i];
  ll ans = 1;
  string curr = arr[n - 1];
  for (ll i = n - 2; i > 0; i--) {
    loop0(j, m) {
      // if ()
    }
  }
}