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

void showdq(deque<int> g) {
  deque<int>::iterator it;
  for (it = g.begin(); it != g.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
}
void showdq(deque<char> g) {
  deque<char>::iterator it;
  for (it = g.begin(); it != g.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
}

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  deque<char> dqc;
  deque<int> dqi;

  for (int i = 0; i < n - 1; i++) {
    if (s[i + 1] < s[i]) {
      dqc.push_back(s[i]);
      dqi.push_back(i);
    }
  }

  if (dqi.size() == 0) {
    cout << 0 << endl;
    return;
  }

  dqc.push_back(s[n - 1]);
  dqi.push_back(n - 1);
  int i = 0;

  showdq(dqc);
  showdq(dqi);

  while (dqi.size() != 0) {
    i++;
    if (dqc.back() < s[dqi.front() - 1]) {
      cout << -1 << endl;
      return;
    } else {
      dqc.pop_back();
      dqi.pop_front();
    }
  }

  cout << i << endl;
}