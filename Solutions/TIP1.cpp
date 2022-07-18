#include<stdio.h>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

#define       ll           int
#define       mxx          10000005


ll A[mxx+5];
ll phi[mxx+2];

void calculatePhi()
{
    for(ll i=1; i<=mxx; i++)phi[i] = i;

    for(ll i =2; i<=mxx; i++)
    {
        if(phi[i]==i)
        {
            for(ll j=i; j<=mxx; j+=i)
                phi[j]-=phi[j]/i;
        }
    }
}

void values()
{
    ll cnt=0;
    double val=10000000000.7;
    for(ll i=2;i<=mxx;i++)
    {
        bool check=true;
        ll rr[12],pp[12];
        memset(rr,0,sizeof(rr));
        memset(pp,0,sizeof(pp));
        ll r=i,p=phi[i],l1=0,l2=0;
        while(r!=0)rr[r%10]++,r/=10,l1++;
        while(p!=0)pp[p%10]++,p/=10,l2++;
        for(ll j=0;j<=9;j++)if(rr[j]!=pp[j])check=false;
        if(l1==l2&&check)
        {
           double h=(double)i/phi[i];
           if(h<=val)val=h,cnt=i;
        }
        A[i]=cnt;
    }
}

int main()
{

    calculatePhi();
    values();
    ll t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%d",&n);
        if(A[n-1]==0)printf("No solution.\n");
        else printf("%d\n",A[n-1]);

    }




    return 0;
}
