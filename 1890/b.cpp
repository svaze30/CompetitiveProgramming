#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(vector<int> s, int n)
{
  if (n == 1)
  {
    cout << -1 << endl;
    return;
  }
  if (n % 2 == 1)
  {
    cout << -1 << endl;
    return;
  }
  int no1 = 0, no0 = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 1)
    {
      no1++;
    }
    else
    {
      no0++;
    }
  }
  if (no1 != no0)
  {
    cout << -1 << endl;
    return;
  }
  int start = 0, end = n - 1;
  int ansarr[1000];
  for (int i = 0; i < 1000; i++)
  {
    ansarr[i] = -1;
  }
  vector<int>::iterator it = s.begin();
  int ops = 0, eq = 0;
  n = n / 2;
  while (eq != (n + ops))
  {
    if (s[start] != s[end])
    {
      eq++;
      start++;
      end--;
    }
    else
    {
      if (s[start] == 0)
      {
        if ((end + 1) == s.size())
        {
          s.push_back(0);
        }
        else
        {
          s.insert(it + end, 0);
        }
        ansarr[ops] = end + 1;
        ;
        ops++;
        eq++;
        start++;
        end++;
      }
      else
      {
        s.insert(it + start, 1);
        s.insert(it + start, 0);
        ansarr[ops] = start + 1;
        start++;
        end++;
        ops++;
        eq++;
      }
    }
  }
  cout << ops << endl;
  for (int i = 0; i < ops; i++)
  {
    cout << ansarr[i] << " ";
  }
  cout << endl;
  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    string s1;
    cin >> s1;
    vector<int> s;
    for (int i = 0; i < n; i++)
    {
      if (s1[i] == '0')
      {
        s.push_back(0);
      }
      else
      {
        s.push_back(1);
      }
    }
    solve(s, n);
  }
  return 0;
}