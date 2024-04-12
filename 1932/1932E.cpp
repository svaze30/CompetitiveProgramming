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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}
string removeZero(string str) {
  // Count leading zeros
  int i = 0;
  while (str[i] == '0')
    i++;

  // The erase function removes i characters
  // from given index (0 here)
  str.erase(0, i);

  return str;
}

void solve() {
  ll n;
  cin >> n;
  string s;
  cin >> s;
  s = removeZero(s);
  n = s.size();
  vector<ll> arr(n);
  ll sum = 0;
  loop0(i, n) {
    sum += (ll)(s[i] - '0');
    arr[i] = (ll)(s[i] - '0');
  }
  vector<ll> ans(n + 1, 0);
  ll carry = 0;
  ll i = 0, j = n - 1;
  // debug(arr);
  while (j != 0) {
    ans[i++] = (sum + carry) % 10;
    carry = (sum + carry) / 10;
    sum -= arr[j--];
  }

  if (sum + carry == 0) {

  } else
    cout << sum + carry;
  for (int k = i - 1; k >= 0; k--) {
    cout << ans[k];
  }
  cout << endl;
  // ans[i++] = sum + carry;
  // cout << sum + carry << endl;
  // debug(ans);
  // string ans = "";
  // ll carry = 0;
  // ll t = n - 1;
  // for (int i = 0; i < n; i++) {
  //   ans += char('0' + (sum + carry) % 10);

  //   carry = (sum + carry) / 10;
  //   sum -= (ll)(s[t] - '0');
  // }
  // cout << ans << endl;
}