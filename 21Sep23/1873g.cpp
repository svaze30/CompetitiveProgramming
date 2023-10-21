#include <iostream>
#include <stack>
void solve();

using namespace std;

int main () {
  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  string s;
  cin >> s;
  int n = s.length();
  stack<char> st;
  int ans = 0;
  for (size_t i = 0; i < n - 1; i++)
  {
    if (s[i] == 'A' && s[i+1] == 'B') {
      s[i] == 'B';
      s[i+1] == 'C';
      ans++;
    }
    if (s[i] == 'B' && s[i+1] == 'A') {
      s[i] == 'C';
      s[i+1] == 'B';
      ans++;
    }
  }
  for (size_t i = n-1; i > 0; i--)
  {
    if (s[i-1] == 'A' && s[i] == 'B') {
      s[i-1] == 'B';
      s[i] == 'C';
      ans++;
    }
    if (s[i-1] == 'B' && s[i] == 'A') {
      s[i-1] == 'C';
      s[i] == 'B';
      ans++;
    }
  }
  cout << ans << endl;
  
  
  
  
}