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
const int rem[]={8,4,2,6};
int main(){
	int n;
	cin>>n;
    if(n==0) cout<<1;
	else{
		int r = n%4;
		if(r==0) cout<<rem[3]<<"\n";
		else cout<<rem[r-1]<<"\n";
	}
	return 0;
}