#include<stdio.h>
#include<iostream>
using namespace std;
 
#define      scln2(x,y)        scanf("%d %d",&(x),&(y))
#define      ll                 int
 
 
 
ll n,W;
ll dp[2][2000005];
ll val[505],wt[505];
 
ll knapsack()
{
    ll res=0,i=1,k=1;
    while(1)
    {
        if(k>n)break;
        for(ll j=1;j<=W;j++)
        {
            if(wt[k-1]<=j)
            {
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[k-1]]+val[k-1]);
            }
            else dp[i][j]=dp[i-1][j];
           // cout<<"j = "<<j<<endl;
        }
        for(ll j=1;j<=W;j++)dp[0][j]=dp[1][j];
       // cout<<"k = "<<k<<endl;
        k++;
    }
    return dp[1][W];
}
 
int main()
{
     scln2(W,n);
     for(ll i=0;i<n;i++)scln2(val[i],wt[i]);
     printf("%d\n",knapsack());
 
 
 
    return 0;
}
