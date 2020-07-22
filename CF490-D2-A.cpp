#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define repk(i,a,b,k) for(int i=(a);i<(b);i+=k)
#define forn(i,n) for(int i=(a);i<(b);i++)
#define all(c) (c).begin(),(c).end()
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
        int n;
        cin>>n;
        vi ch[3];
        rep(i,0,n){
            int d;
            cin>>d;
            ch[--d].pb(i+1);
        }
        int mi=min(ch[0].size(),min(ch[1].size(),ch[2].size()));
        cout<<mi<<"\n";
        rep(i,0,mi) cout<<ch[0][i]<<" "<<ch[1][i]<<" "<<ch[2][i]<<"\n";
	return 0;
}
