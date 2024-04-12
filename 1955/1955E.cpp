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
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int, int>
#define pll pair<ll, ll>

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

bool check(string s, int k) {
  int n = s.size();
  vi pre(n + 1, 0);
  int i;
  for (i = 0; i + k <= n; i++) {
    if (pre[i] % 2 == 0) {
      if (s[i] == '0') {
        pre[i]++;
        pre[i + k]--;
      } else {
      }
    } else {
      if (s[i] == '1') {
        pre[i]++;

        pre[i + k]--;
      } else {
      }
    }
    pre[i + 1] = pre[i] + pre[i + 1];
  }
  for (; i < n; i++) {
    if (pre[i] % 2 == 0 and s[i] == '0')
      return false;
    if (pre[i] % 2 != 0 and s[i] == '1')
      return false;
    pre[i + 1] = pre[i] + pre[i + 1];
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (int i = n; i > 0; i--) {
    if (check(s, i)) {
      cout << i << endl;
      return;
    }
  }
  cout << 1 << endl;
}