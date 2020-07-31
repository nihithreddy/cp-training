#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
int sum=accumulate(a.begin(),a.end(),0);
sort(a.begin(),a.end());
int taken=0,i=0;
for(i=n-1;i>=0;i--){
sum-=a[i];
taken+=a[i];
if(taken>sum){
break;
}
}
if(i>0) cout<<(n-i)<<endl;
else cout<<(n)<<endl;
return 0;
}
