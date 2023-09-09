#include <iostream>

using namespace std;

void solve() {
  int n;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) 
    cin >> arr[i];
  
  int one = 0;

  for (int i = 0; i < n; i++) 
    if (arr[i] == -1) one++; 
  if (one % 2 == 0 && one <= n/2) 
    cout << 0 << endl;
  else if (one <= n/2)
    cout << 1 << endl;
  else
    cout << one - (n/4)*2 << endl;
}

int main (int argc, char *argv[]) {
  int t;

  cin >> t;

  while (t--) 
    solve();

  return 0;
}
