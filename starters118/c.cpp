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
  int n, m;
  cin >> n >> m;
  int arr[n];
  loop0(i, n) cin >> arr[i];
  // priority_queue<int, vector<int>, greater<int>> pq;
  int ans = 0;
  loop0(i, n) {
    if (arr[i] < m) {
      if (i != n - 1)
        arr[i + 1] += arr[i];
      ans++;
    }
  }
  cout << n - ans << endl;
  // cout << pq.size() << endl;
}