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
  cin >> n;
  string s;
  cin >> s;
  if (n & 1)
  {
    cout << -1 << endl;
    return;
  }
  int nones = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '1')
      nones++;
  }
  if (nones != n / 2)
  {
    cout << -1 << endl;
    return;
  }
  int st = 0;
  int end = n;
  vector<int> ans;
  int toadd = 0;
  deque<char> dq;
  for (int i = 0; i < n; i++)
  {
    dq.push_back(s[i]);
  }

  while (st < end)
  {
    if ((dq.front() == '0' && dq.back() == '1') || (dq.front() == '1' && dq.back() == '0'))
    {
      st++;
      end--;
      dq.pop_front();
      dq.pop_back();
    }
    else if ((dq.front() == '0' && dq.back() == '0'))
    {
      ans.push_back(end);
      dq.push_back('0');
      dq.push_back('1');
      end += 2;
    }
    else if ((dq.front() == '1' && dq.back() == '1'))
    {
      ans.push_back(st);
      dq.push_front('1');
      dq.push_front('0');
      end += 2;
    }
  }
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}