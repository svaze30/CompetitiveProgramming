#include <iostream>
using namespace std;

long long int factorial (long long int base, long long int p) {
    long long int prod = 1;
    for (long long int i = 0 ; i < p ; i ++) {
        prod *= base;
        base = base - 1;
    }
    return prod;
}

void solve () {
    long long int n , k;
    cin >> n >> k ;
    if (k >= n) {
        cout << factorial(k, n) << endl;
    } else {
        cout << factorial(k, k) << endl;
    }
}

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
