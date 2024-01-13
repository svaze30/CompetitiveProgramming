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

  int gt = 0;

  int lt = 1000000001;

  vector<int> none;

  int a, x;

  loop0(i, n) {
    cin >> a >> x;
    if (a == 1) {
      gt = max(gt, x);
    } else if (a == 2) {
      lt = min(lt, x);
    } else {
      none.push_back(x);
    }
  }

  int ans = lt - gt + 1;

  loop0(i, none.size()) {
    if (ans != 0)
      if (none[i] <= lt && none[i] >= gt) {
        ans--;
      }
  }
  if (ans <= 0)
    ans = 0;
  cout << ans << endl;
}