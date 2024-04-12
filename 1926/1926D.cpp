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

vector<char> opp(vector<char> s) {
  vector<char> ans(31, '0');
  loop0(i, 31) { ans[i] = (s[i] == '1') ? '0' : '1'; }
  return ans;
}

vector<char> num(int n) {

  vector<char> ans(31, '0');
  loop0(i, 31) {
    ans[i] = char('0' + n % 2);
    n /= 2;
  }
  return ans;
}

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  map<vector<char>, int> m;
  loop0(i, n) cin >> arr[i];
  ll grp = n;
  vector<char> bruh(31, '0');
  loop0(i, n) {
    // debug(num(arr[i]));
    // debug(opp(num(arr[i])));
    if (m[opp(num(arr[i]))] != 0) {
      m[opp(num(arr[i]))]--;
      grp--;
    } else {
      m[num(arr[i])]++;
    }
  }
  cout << grp << endl;
}