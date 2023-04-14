#include<iostream>

using namespace std;

void getArr(int arr[], int size) {
    for (size_t i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void solve() {
    int n, m;
    cin>>n>>m;
    int k[n];
    int abc[m][3];
    getArr(k, n);
    for (int i = 0 ; i < m ; i++) {
        cin>>abc[m][0]>>abc[m][1]>>abc[m][2];
    }
    
    for (int i = 0 ; i < m ; i++) {
        int c = 0;
        for (int j = 0 ; j < n ; j++) {
            if ((abc[i][1] - k[j])*(abc[i][1] - k[j]) < 4*abc[i][0]*abc[i][2]) {
                cout<<"YES"<<endl<<k[j]<<endl;
                c = 1;
                break;
            }
        }
        if (c==0) {
            cout<<"NO"<<endl;
        }
    }
}

int main () {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}