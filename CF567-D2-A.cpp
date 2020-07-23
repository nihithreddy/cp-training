#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
int main(){
    int n;
    cin>>n;
    int a[n];
    rep(i,0,n) cin>>a[i];
    rep(i,0,n){
        if(i==0) cout<<abs(a[i]-a[i+1])<<" "<<abs(a[i]-a[n-1]);
        else if(i==n-1) cout<<abs(a[i]-a[i-1])<<" "<<abs(a[i]-a[0]);
        else cout<<min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]))<<" "<<max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
        cout<<"\n";
    }
    return 0;
}
