#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    for(int i=1;i<=9;i++){
        int p=i*k;
        if(p%10==0||p%10==r){
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}
