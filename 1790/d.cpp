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
  vector<int> arr(n);
  loop0(i, n) cin >> arr[i];

  sort(arr.begin(), arr.end());

  int ans = 1;
  multiset<int> s;
  s.insert(arr[0]);
  loop1(i, n - 1) {
    if (s.count(arr[i] - 1) > 0) {
      s.erase(s.find(arr[i] - 1));
    }
    s.insert(arr[i]);
  }

  cout << s.size() << endl;
}