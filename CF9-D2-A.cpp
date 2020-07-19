#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int mx = max(x,y);
    int a = 6-mx+1;
    int b= 6;
    cout<<a/__gcd(a,b)<<"/"<<b/__gcd(a,b);
    return 0;
}
