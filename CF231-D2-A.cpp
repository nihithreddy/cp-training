#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,ans=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
    	int count=0;
    	for(int j=0;j<3;j++)
    	{
    		cin>>a[i][j];
    		if(a[i][j]==1)
    			count++;
    	}
    	if(count>=2)
    		ans++;
    }
    cout<<ans;
    return 0;
}
