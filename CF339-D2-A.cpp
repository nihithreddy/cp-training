#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<int> digits;
    int i=0;
    digits.resize(s.size()/2+1);
    for(char c:s){
        if(c!='+')
        digits[i++]=c-'0';
    }
    sort(digits.begin(),digits.end());
    int n=digits.size();
    for(int i=0;i<n;i++){
        cout<<digits.at(i);
        if(i!=n-1) cout<<"+";
    }
    return 0;
}
