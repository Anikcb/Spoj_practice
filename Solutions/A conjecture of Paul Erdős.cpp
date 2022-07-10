#include<bits/stdc++.h>
#define   mxx    10000005
using namespace std;

bitset<mxx>arr2;
void prime()
{
    int i,j;
    arr2[1]=1;
    arr2[0]=1;
    for(int i=4;i<=mxx;i+=2)arr2[i]=1;
    for(i=3; i<=sqrt(mxx); i=i+2)
    {
        if(arr2[i]==0)
        {
            for(j=i*i; j<=mxx; j=j+i+i)
            {
                arr2[j]=1;
            }
        }
    }


}
int mp[10000009];
void fun()
{
    for(int i=1; i<=60; i++)
    {
        long long int x=i*i*i*i;
        if(x>1e7)break;
        for(int j=1; j<3165; j++)
        {
            long long int y=j*j;
            if(x+y>1e7)break;
            if(arr2[x+y]==0)mp[x+y]=1;
        }
    }
    for(int i=1; i<=1e7; i++)mp[i]+=mp[i-1];
}
int main()
{
     prime();
     fun();
     int t;
     scanf("%d",&t);
     while(t--)
     {
         int n;
         scanf("%d",&n);
         printf("%d\n",mp[n]);
     }





    return 0;
}
