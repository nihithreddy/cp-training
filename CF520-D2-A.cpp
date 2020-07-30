#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string s;
cin>>s;
int f[26]={0};
for(int i=0;i<s.size();i++)
{
char ch=tolower(s[i]);
f[ch-'a']++;
}
int i=0;
for(i=0;i<26;i++)
{
if(f[i]==0)
{
cout<<"NO";
break;
}
}
if(i==26)
cout<<"YES";
return 0;
}
