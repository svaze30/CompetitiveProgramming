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
  int n, k, d;
  cin >> n >> k >> d;
  int arr[n];
  int b[k];
  ll ans = 0;
  loop0(i, n) {
    cin >> arr[i];
    if (arr[i] == i + 1) {
      ans++;
    }
  }

  loop0(i, k) { cin >> b[i]; }
  if (ans != 0) {
    d--;
  } else if (false) {

  } else {
    ans += d / 2;
  }
  cout << ans << endl;
}