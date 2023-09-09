#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int sum = 0;
  int minodd = 101;

  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 1 && minodd > arr[i]) {
      minodd = arr[i];
    }
    sum += arr[i];
  }

  if (sum % 2 == 1) {
    cout << sum << endl;
  } else if (minodd != 101) {
    cout << sum - minodd << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
