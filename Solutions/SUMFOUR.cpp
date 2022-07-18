#include<iostream>
#include<unordered_map>
using namespace std;

#define          ll                     long long int
#define          scln(x)                scanf("%lld",&(x))
#define          scln2(x,y)             scanf("%lld %lld",&(x),&(y))

ll A[4005],B[4005],C[4005],D[4005];
int main()
{
    unordered_map<ll,ll>mp;
    mp.reserve(16000000);
    ll n,res=0;
    scln(n);
    for(ll i=0;i<n;i++)scln2(A[i],B[i]),scln2(C[i],D[i]);
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            mp[A[i]+B[j]]++;
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            ll val=C[i]+D[j];
            val*=-1;
            if(mp.find(val)!=mp.end())res+=mp[val];
        }
    }
    printf("%lld\n",res);










    return 0;
}
