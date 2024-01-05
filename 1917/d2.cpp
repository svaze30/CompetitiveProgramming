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
  int n;
  cin >> n;
  int mx = -1;
  int arr[n][2];
  int prev = 1;
  loop0(i, n) { cin >> arr[i][0] >> arr[i][1]; }
  int l = -1, r = 1000000000;

  while (r - l > 1) {
    int mid = (r + l) / 2;
    int ll = 0, rr = 0;
    bool x = true;
    for (int i = 0; i < n; i++) {
      ll = max(ll - mid, arr[i][0]);
      rr = max(rr + mid, arr[i][1]);
      if (ll > rr) {
        x = false;
        break;
      }
    }
    if (x) {
      r = mid;
    } else {
      l = mid;
    }
  }
  cout << r << endl;
}