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

void solve()
{
  int n;
  string s;
  cin >> n;
  cin >> s;
  stack<char> st;
  for (int i = 0; i < n; i++)
  {

    if (st.empty())
      st.push(s[i]);
    else
    {
      if (st.top() == '1')
      {
        if (s[i] == '0')
        {

          while (st.top() != '0' && !st.empty())
          {
            st.pop();
          }
        }
        else
        {
          st.push(s[i]);
        }
      }
      else
      {
      }
    }
  }
  cout << st.size() << endl;
}