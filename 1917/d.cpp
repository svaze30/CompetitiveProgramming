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
  loop0(i, n) {
    cin >> arr[i][0] >> arr[i][1];
    if (i > 0) {
      int term = 0;
      if (prev == 0) {
        if (arr[i][0] >= arr[i - 1][0]) {
          term = arr[i][0] - arr[i - 1][0];
        } else if (arr[i][1] <= arr[i - 1][0]) {
          term = arr[i - 1][0] - arr[i][1];
          prev = 1;
        }
      } else {
        if (arr[i][1] <= arr[i - 1][1]) {
          term = arr[i - 1][1] - arr[i][1];
        } else if (arr[i][0] >= arr[i - 1][1]) {
          term = arr[i][0] - arr[i - 1][1];
          prev = 0;
        }
      }
      mx = max(mx, term);
    } else {
      mx = arr[i][0];
      prev = 0;
    }
  }

  int s = arr[0][0], e = mx;
  int mid = (s + e) / 2;
  int p = 0;
  bool can = true;
  while (s <= e) {
    for (int i = 0; i < n - 1; i++) {
      if (arr[i][0] > mid + p) {
        can = false;
        s = mid + 1;
        break;
      } else if (arr[i][1] < p - mid) {
        can = false;
        s = mid + 1;
        break;
      } else if () {
      }
    }
  }
  cout << mid << endl;
}