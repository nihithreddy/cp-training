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
        int n,ans=0;
        cin>>n;
        int a[n];
        rep(i,0,n) cin>>a[i];
        sort(a,a+n);
        rep(i,0,n){
            int l = lower_bound(a,a+n,a[i])-a;
            int r = n-(upper_bound(a,a+n,a[i])-a);
            if(l&&r) ans++;
        }
        cout<<ans<<"\n";
	return 0;
}
