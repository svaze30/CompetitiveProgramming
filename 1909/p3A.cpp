#include<bits/stdc++.h>

#define int long long

using namespace std;


signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t,n,ans;
    cin>>t;
    while(t--){
        ans=0;
        cin>>n;
        int arr[n][2];
        for(int i=0;i<n;i++){
            cin>>arr[i][0]>>arr[i][1];
        }
        int a=0,b=0,c=0,d=0;
        for(int i=0;i<n;i++){
            if(arr[i][0]<0){
                a=1;
            }
            if(arr[i][1]<0){
                b=1;
            }
            if(arr[i][0]>0){
                c=1;
            }
            if(arr[i][1]>0){
                d=1;
            }
        }
        if(a+b+c+d==4){
            ans=0;
        }else{ans=1;}

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}