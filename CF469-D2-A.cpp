#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=(0);i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(c) (c).begin(),(c).end()
#define sz(c) (int)(c).size()
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<double> vd;
typedef vector<string> vs;
const int mod = (int)1e9+7;
int n,m,d,f;
map<int,int> mp;
void solve(){
	cin>>n>>m;
	forn(i,m){
		cin>>d;
		mp[d-1]=1;
	}
	cin>>m;
	forn(i,m){
		cin>>d;
		mp[d-1]=1;
	}
	forn(i,n){
		if(!mp[i]){
			f = 1;
			break;
		}
	}
	if(f) cout<<"Oh, my keyboard!";
	else cout<<"I become the guy.";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}