#include <iomanip>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <iterator>
#include <bitset>
#include <assert.h>
#include <new>
#include <sstream>
#include <time.h>


using namespace std;
typedef long long ll;
#define     re                return
#define     IOS               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




ll bigmod(ll a,ll p,ll m)
{
    ll x=a%m,res=1;
    if(x==0)re 0;
    while(p){
        if(p&1)res = (res*x)%m;
        x = (x*x)%m;
        p>>=1;
    }
    re res;
}


int main()
{
    IOS;
    ll tst=1;
    //cin>>tst;
    for(ll tt=1;  ;tt++)
    {
        //code
        ll n,k;
        cin>>n>>k;
        if(!n && !k)break;
        ll val=(2*bigmod(n-1,k,MOD))%MOD + bigmod(n,k,MOD) + (2*bigmod(n-1,n-1,MOD))%MOD + bigmod(n,n,MOD);
        cout<<val%MOD<<endl;

    }


    return 0;
}
