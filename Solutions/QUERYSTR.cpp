#include<bits/stdc++.h>
using namespace std;
 
#define   ll      long long int
#define   all(v)  v.begin(),v.end()
 
ll Z[1000006];
 
void z_function(string s,ll n)
{
    Z[0]=n;
    for (ll i = 1, L = 0, R = 0; i < n; ++i)
    {
        if (i <= R) Z[i] = min (R - i + 1, Z[i - L]);
        else Z[i] = 0;
        while (i + Z[i] < n && s[Z[i]] == s[i + Z[i]]) ++Z[i];
        if (i + Z[i] - 1 > R)L = i, R = i + Z[i] - 1;
    }
 
}
char ch[1000006];
int main()
{
     ll t;
     scanf("%lld",&t);
     while(t--)
    {
        string s;
        scanf("%s",ch);
        s=ch;ll len=s.size();
        reverse(all(s));
        z_function(s,len);
        ll n;
        scanf("%lld",&n);
        for(ll i=0;i<n;i++)
        {
            ll a;
            scanf("%lld",&a);
            printf("%lld\n",Z[len-a]);
        }
    }
 
 
 
    return 0;
}
 
