#include <bits/stdc++.h>
#define endl "\n"

void solve();

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void disp(stack<char> st)
{
  if (st.empty())
    return;
  char a = st.top();
  cout << a;
  st.pop();
  disp(st);
  st.push(a);
}
bool check(stack<char> st, char c)
{
  if (st.empty())
    return false;
  if (st.top() == c)
    return true;
  return false;
}
void solve()
{
  string s;
  cin >> s;
  int ans = 0;
  int n = s.length();
  if (n == 1)
  {
    cout << 0 << endl;
    return;
  }
  for (int i = 0; i < n - 1; i++)
  {
    if (s[i] == 'A' && s[i + 1] == 'B')
    {
      s[i] = 'B';
      s[i + 1] = 'C';
      ans++;
    }
    if (s[i] == 'B' && s[i + 1] == 'A')
    {
      s[i] = 'C';
      s[i + 1] = 'B';
      ans++;
    }
  }
  for (int i = n - 2; i > -1; i--)
  {
    if (s[i] == 'A' && s[i + 1] == 'B')
    {
      s[i] = 'B';
      s[i + 1] = 'C';
      ans++;
    }
    if (s[i] == 'B' && s[i + 1] == 'A')
    {
      s[i] = 'C';
      s[i + 1] = 'B';
      ans++;
    }
  }

  cout << ans << endl;
}