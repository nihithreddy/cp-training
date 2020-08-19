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
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
    int n,t;
	cin>>n>>t;
	if(n==1 && t==10) cout<<"-1";
	else{
		cout<<t;
		if(t==10){
			forn(i,n-2) cout<<0;
		}
		else{
			forn(i,n-1) cout<<0;
		}
	}
	
	
	return 0;
}