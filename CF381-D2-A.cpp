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
        int n;
        cin>>n;
        int a[n];
        rep(i,0,n) cin>>a[i];
        int A=0,B=0,i=0,j=n-1;
        rep(k,0,n){
            if(k&1){
                if(a[i]>a[j]){B+=a[i];i++;}
                else {B+=a[j];j--;}
            }
            else{
                if(a[i]>a[j]){A+=a[i];i++;}
                else {A+=a[j];j--;}
            }
        }
        cout<<A<<" "<<B<<endl;
	return 0;
}
