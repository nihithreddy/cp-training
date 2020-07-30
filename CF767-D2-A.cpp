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
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        int n,d,k;
        cin>>n;
        int seen[n]={0};
        k=n;
        forn(i,n){
            cin>>d;
            seen[d-1]=1;
            if(d==k){
              for(int j=k;j>=1;j--){
               if(seen[j-1]) cout<<j<<" ";
                else {k=j;break;}
              }
            }
            cout<<"\n";
        }
	return 0;
}
