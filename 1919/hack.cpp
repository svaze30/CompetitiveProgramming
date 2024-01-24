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

void solve() {
  ll n, k;
  cin >> n >> k;
  priority_queue<ll> pq;
  loop0(i, n) {
    ll b;
    cin >> b;
    pq.push(b);
  }
  ll ans = 0;
  loop0(i, k) {

    ll curr = pq.top();

    ans += curr;
    pq.pop();
    pq.push(curr / 2);
    // cout << curr << endl;
  }
  cout << ans << endl;
}