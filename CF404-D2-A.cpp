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
char c[305][305];
int main(){
	int n;
	cin>>n;
	forn(i,n){
		forn(j,n) cin>>c[i][j];
	}
	bool ok = true;
	forn(i,n){
		forn(j,n){
			if(i==j||i+j==n-1){
				if(c[i][j]!=c[0][0]){
					ok = false;
					break;
				}
			}
			else{
				if(c[i][j]!=c[0][1]||c[i][j]==c[0][0]){
					ok = false;
					break;
				}
			}
		}
		if(!ok) break;
	}
	string ans = (ok)?"YES":"NO";
	cout<<ans<<"\n";
	return 0;
}