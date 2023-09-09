#include <iostream>

using namespace std;

int main() {
  int n , m;
  cin >> n >> m;
  int arr[m];
  for (int i = 0; i < m; i++) {
    cin >> arr[i];
  }
  long long int ans = arr[0] - 1;
  for (int i = 1; i < m; i++) {
    if ( arr[i - 1] <= arr[i]) {
      ans += arr[i] - arr[i - 1];
    } else {
      ans += n + arr[i] - arr[i - 1];
    }
  }
  cout << ans << endl;
  return 0;
}
