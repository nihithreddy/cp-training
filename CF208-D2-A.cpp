#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    regex r("WUB");
    string original=regex_replace(s,r," ");
    cout<<original<<'\n';
    return 0;
}