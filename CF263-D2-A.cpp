#include<bits/stdc++.h>
using namespace std;
int a[6][6];
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int pos_x=-1,pos_y=-1;
for(int i=1;i<=5;i++){
for(int j=1;j<=5;j++){
cin>>a[i][j];
if(a[i][j]==1){
pos_x=i;
pos_y=j;
}
}
}
cout<<abs(pos_x-3)+abs(pos_y-3)<<endl;
return 0;
}
