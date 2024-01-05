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

int sum(int arr[]) {
  int ans = 0;
  for (int i = 0; i < 26; i++)
    ans += arr[i];
  return ans;
}

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int a[n] = {0};
  int arr[26] = {0};

  ll ans = 0;

  for (int i = 0; i < n; i++) {
    arr[s[i] - 'a'] = 1;
    a[i] = sum(arr);
  }
  for (int i = 0; i < n; i++)
    ans += (ll)a[i];

  cout << ans << endl;
}