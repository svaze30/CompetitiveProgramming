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
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int, int>
#define pll pair<ll, ll>

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
  vll a(n);
  loop0(i, n) cin >> a[i];

  int ans = 0;

  priority_queue<ll> pq;
  priority_queue<ll, vll, greater<ll>> pq2;
  ll sum = 0;
  for (int i = m; i < n; i++) {
    sum += a[i];
    if (a[i] < 0)
      pq.push(-a[i]);
    if (sum < 0) {
      sum += 2 * pq.top();
      pq.pop();
      ans++;
    }
  }
  sum = 0;
  for (int i = m - 1; i >= 1; i--) {
    sum += a[i];
    if (a[i] > 0)
      pq2.push(-a[i]);
    if (sum > 0) {
      sum += 2 * pq2.top();
      pq2.pop();
      ans++;
    }
  }
  cout << ans << endl;
}