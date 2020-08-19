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
int n,f;
pair<int,int> p[1005];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>n;
	forn(i,n) cin>>p[i].ff>>p[i].ss;
    forn(i,n){
		if(p[i].ff!=p[i].ss){
			f=1;
			break;
		}
	}
	if(f) cout<<"rated";
	else{
		forn(i,n){
			forn(j,i){
				if(p[j].ff<p[i].ff){
					f=1;
					break;
				}
			}
			if(f) break;
		}
		if(f) cout<<"unrated";
		else cout<<"maybe";
	}
	return 0;
}