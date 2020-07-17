#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
string s;
cin>>s;
int n=s.size();
unordered_map<char,int> m;
for(int i=0;i<n;i++){
m[s[i]]+=1;
}
int unique=m.size();
if(!(unique&1)) cout<<"CHAT WITH HER!"<<endl;
else cout<<"IGNORE HIM!"<<endl;
return 0;
}
