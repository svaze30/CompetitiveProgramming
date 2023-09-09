#include <iostream>

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
  int range = 0;
  int n = s.length();
  bool sort = true;
  int prevrange = 0;
  bool first = true;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '+') range++;

    if (s[i] == '-') 
    {
      if (range == prevrange) {
        prevrange--;
      }
      range--;
    }

    if (s[i] == '1') {
      
      if (prevrange < range) {
        if (sort) {

        } else {
          cout << "NO" << endl;
          return;
        }
      }
      sort = true;
      prevrange = range;
      if (first) first = false;
    }
    if (s[i] == '0') {
      if (first) sort = false;
      if (prevrange < range) {
        if (!sort) {

        }
      } else {
        if (!sort) {

        } else {
          cout << "NO" << endl;
          return;
        }
      }
      if (range == 0 || range == 1) {
        cout << "NO" << endl;
        return;
      }
      sort = false;
      prevrange = range;
      if (first) first = false;
    }

  }
  cout << "YES" << endl;
  
}