#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
int main(){
    int n,d;
    cin>>n;
    int a[n];
    rep(i,0,n) cin>>a[i];
    sort(a,a+n);
    rep(i,0,n) cout<<a[i]<<" ";
    return 0;
}
