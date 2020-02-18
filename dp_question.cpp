#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int fun(int* w,int* v,int i,int cap)
{
    if(i==-1 || cap==0) 
        return 0;
    if(dp[i][cap]) 
        return dp[i][cap];
    if(w[i]<cap)
    {
        dp[i][cap]= max( fun(w,v,i-1,cap) , fun(w,v,i-1,cap-w[i]) +v[i] );
    }
    else
    {
        dp[i][cap]= fun(w,v,i-1,cap);
    }
    return dp[i][cap];
}
int main()
{
    int n=3;
    int cap=2;
    int w={1,1,1};
    int v={10,20,30};
    int dp[n+1][cap+1];
    fot i=0;i<n+1;i++r(in)
    {
        for(int j=0;j<cap+1;j++)
        {
            if(j==0 ||i==0)
            {
                dp[i][j]=0;
                continue;
            }
            if(w[i-1]<=j)
            {
                dp[i][j]=max( dp[i-1][j],dp[i-1][j -w[i-1] ] +v[i-1] );
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][cap];

}