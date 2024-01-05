#include<bits/stdc++.h>

#define int long long

using namespace std;

bool equal(int* arr, int n){
    bool same=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            same=0;
            break;
        }
    }
    return same;
}

signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k=2;
        int check[n];
        for(int i=0;i<n;i++){
            check[i]=arr[i]%k;
        }
        while(equal(check,n)){
            k=k*2;
            for(int i=0;i<n;i++){
                check[i]=arr[i]%k;
            }
        }

        cout<<k<<endl;
    }
return 0;
}