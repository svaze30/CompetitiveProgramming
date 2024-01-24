#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

using namespace std;

bool subsetSumToK(int n, int k, vector<int> arr) {

  vector<bool> prev(k + 1, false);

  prev[0] = true;

  if (arr[0] <= k) {
    prev[arr[0]] = true;
  }

  for (int ind = 1; ind < n; ind++) {

    vector<bool> cur(k + 1, false);

    cur[0] = true;

    for (int target = 1; target <= k; target++) {

      bool notTaken = prev[target];

      bool taken = false;
      if (arr[ind] <= target) {
        taken = prev[target - arr[ind]];
      }
      cur[target] = notTaken || taken;
    }
    prev = cur;
  }

  return prev[k];
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
  vector<int> a(n);
  vector<int> b(n);

  loop0(i, n) {
    cin >> a[i] >> b[i];
    if (a[i] > b[i])
      swap(a[i], b[i]);
  }

  vector<int> diff;

  loop0(i, n) {
    if (b[i] - a[i] > 0)
      diff.push_back(b[i] - a[i]);
  }

  int sum = 0;

  loop0(i, n) sum += a[i];

  int x = m - sum;
  if (x < 0) {
    cout << "NO" << endl;
    return;
  }
  if (x == 0) {
    cout << "YES" << endl;
    return;
  }
  if (subsetSumToK(diff.size(), x, diff)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}