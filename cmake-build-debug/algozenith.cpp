#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long a,b;
        cin>>n;

        vector< int> arr;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<long long int> diff;
        map<int, int> mapp;
        for (int i = 0; i < n; ++i) {
            diff.push_back(accumulate(arr, i, 0));
        }
        
    }

    return 0;
}