#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define repk(i,a,b,k) for(int i=(a);i<(b);i+=k)
#define forn(i,n) for(int i=(0);i<(n);i++)
#define all(c) (c).begin(),(c).end()
#define clear(c) (c).clear()
#define pb push_back
#define ff first
#define ss second
#define endl "\n"
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pii> vpii;
char d;
string s;
string str[]={"qwertyuiop","asdfghjkl;","zxcvbnm,./"};
char search_letter(char ch){
    forn(i,3){
        if(str[i].find(ch)!=string::npos){
            int idx = str[i].find(ch);
            if(d=='L') return str[i][idx+1];
            else return str[i][idx-1];
        }
    }
}
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        cin>>d>>s;
        forn(i,s.size()) cout<<search_letter(s[i]);
	return 0;
}
