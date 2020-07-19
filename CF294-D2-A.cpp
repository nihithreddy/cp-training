#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define repk(i,a,b,k) for(int i=(a);i<(b);i+=k)
#define forn(i,n) for(int i=(a);i<(b);i++)
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
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        int n,m,x,y;
        cin>>n;
        int a[n];
        rep(i,0,n) cin>>a[i];
        cin>>m;
        rep(i,0,m){
            cin>>x>>y;
            x--;
            int l = y-1;
            int r = a[x]-y;
            a[x]=0;
            if(l){
                if(x!=0) a[x-1]+=l;
            }
            if(r){
                if(x!=n-1) a[x+1]+=r;
            }
        }
        rep(i,0,n) cout<<a[i]<<"\n";
	return 0;
}
