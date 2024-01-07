#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

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
  vector<ll> arr(n);

  vector<ll> pre(m);
  priority_queue<ll> pq;

  ll t = 0, prev = 0;
  loop0(i, n) {
    cin >> arr[i];
    if (i == 0)
      pre[i] = arr[i];
    else if (i >= m) {
      if (prev + arr[i] < 0) {
        t++;
        prev += -1 * arr[i];
      } else {
        prev += arr[i];
      }
    } else
      pre[i] = pre[i - 1] + arr[i];
  }

  ll curr = pre[m];
  ll ans = 0;
  for (int i = m - 1; i >= 0; i--) {
    while (pre[i] < curr) {
      ll top = pq.top();
      pq.pop();
      curr -= 2 * top;
      ans++;
    }
    pq.push(arr[i]);
  }
  cout << ans + t << endl;
}