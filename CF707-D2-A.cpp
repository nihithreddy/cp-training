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
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<double> vd;
typedef vector<string> vs;
const int mod = (int)1e9+7;
int main(){
	int n,m,a=0,b=0;
	cin>>n>>m;
    forn(i,n){
		forn(j,m){
		  char c;
		  cin>>c;
		  if(c=='B'||c=='W'||c=='G') a++;
		  else b++;
		}
	}
	if(b) cout<<"#Color";
	else cout<<"#Black&White";
	return 0;
}