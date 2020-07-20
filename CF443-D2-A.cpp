#include<bits/stdc++.h>
using namespace std;
string s;
map<int,int> mp;
int main(){
    getline(cin,s);
    for(char c:s){
        if(isalpha(c)){
            mp[c]=1;
        }
    }
    cout<<mp.size();
    return 0;

}
