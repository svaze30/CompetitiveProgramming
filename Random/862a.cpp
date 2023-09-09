#include<iostream>

using namespace std;
void getArr(int arr[], int size) {
    for (size_t i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
void solve() {
    int n;
    cin>>n;
    int arr[n];
    getArr(arr, n);
    int sum = 0;
    for (size_t i = 0; i < n; i++) {
        sum = sum ^ arr[i];
    }
    if (sum == 0 ) {
        cout<<sum<<endl;
    } else if (sum != 0 && n % 2 == 0 ) {
        cout<<"-1"<<endl;
    } else if (sum != 0 && n % 2 != 0 ) {
        cout<<sum<<endl;
    }
}

int main () {
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}