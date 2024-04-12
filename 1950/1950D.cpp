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

void debug(auto arr) {
  for (auto i : arr)
    cout << i << ' ';
  cout << endl;
}

void solve();

int n = 100001;
vector<int> dp(n + 1, 0);
vector<int> nums;

bool isBinDec(int n) {
  while (n) {
    if (!(n % 10 == 1 or n % 10 == 0))
      return false;
    n /= 10;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  for (int i = 1; i <= n; i++) {
    if (isBinDec(i) or dp[i]) {
      nums.pb(i);
      dp[i] = 1;
      for (auto j : nums)
        if (j * i <= n)
          dp[i * j] = 1;
    }
  }

  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  int i;
  cin >> i;

  if (dp[i] != 0)
    yes;
  else
    no;
}