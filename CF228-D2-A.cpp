#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
int d;
set<int> s;
int main(){
    rep(i,0,4){
        cin>>d;
        s.insert(d);
    }
    cout<<4-s.size();
    return 0;
}
