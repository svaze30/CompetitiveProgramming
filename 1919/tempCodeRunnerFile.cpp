#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve();

int main() {
  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  ll n, k;
  cin >> n >> k;
  priority_queue<ll> pq;
  for (ll i = 0; i < n; i++) {
    ll b;
    cin >> b;
    pq.push(b);
  }
  ll ans = 0;
  for (ll i = 0; i < k; i++) {

    ll curr = pq.top();

    ans += curr;
    pq.pop();
    pq.push(curr / 2);
  }
  cout << ans << endl;
}