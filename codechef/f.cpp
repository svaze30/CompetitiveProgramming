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
  int arr[n];
  loop0(i, n) cin >> arr[i];

  vector<vector<int>> ans;
  int yo = 0;

  while (true) {

    vector<bool> bruh(n, false);

    int xxx = 0, yyy = 0;

    for (int i = 0; i < n; i++) {
      if (arr[i] == i + 1) {
        xxx++;
      } else if (bruh[i] == false && bruh[arr[i] - 1] == false) {
        bruh[i] = true;
        bruh[bruh[i] - 1] = true;
        vector<int> tp;
        ans.push_back(tp);
        ans[yo].push_back(i + 1);
        ans[yo].push_back(arr[i]);
        swap(arr[i], arr[arr[i] - 1]);

        yyy++;
      }
    }

    yo++;
    if (yyy == 0) {
      break;
    }
    if (xxx == n)
      break;
  }

  int nn = ans.size();
  cout << nn << endl;
  if (nn == 0)
    return;
  loop0(i, nn) {
    int nnn = ans[i].size();
    if (nnn != 0) {
      cout << nnn << " ";
      loop0(j, nnn) { cout << ans[i][j] << ' '; }
      cout << endl;
    }
  }
}