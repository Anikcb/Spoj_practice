//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#include<bits/stdc++.h>
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


//using    namespace __gnu_pbds;
using namespace std;


/*** Typedef ***/
typedef long long ll;
typedef unsigned long long ull;



/*** Input ***/
#define sci1(a) scanf("%d",&a)
#define sci2(a,b) scanf("%d %d",&a,&b)
#define scln1(a) scanf("%lld",&a)
#define scln2(a,b) scanf("%lld %lld",&a,&b)


/*** Output ***/
#define pf1(a) prllf("%d\n",a)
#define pf2(a,b) prllf("%d %d\n",a,b)
#define pfln1(a) prllf("%lld\n",a)
#define pfln2(a,b) prllf("%lld %lld\n",a,b)


/*** Loops ***/
#define foR0(num) for(ll i = 0; i < num; i++)
#define foR1(num) for(ll i = 1; i <= num; i++)
#define foRev(num) for(ll i = num - 1; i >= 0; i--)
#define rep(i, x, n) for (ll i = x, _n = (n); i < _n; ++i)
#define forIn(arr, num) for(ll i = 0; i < num; i++) cin>>arr[i];
#define forIn1(arr, num) for(ll i = 1; i <= num; i++) cin>>arr[i];



/*** Define Values ***/

#define     ff                first
#define     ss                second
#define     re                return
#define     MP                make_pair
#define     pb                push_back
#define     SZ(x)             ((ll) (x).size())


#define     EPS               10E-10
#define     mxx               30005
#define     MOD               1000000007
#define     iseq(a,b)         (fabs(a-b)<EPS)
#define     PI                3.141592653589793238462643
#define     HAR               0.57721566490153286060651209


#define     Ceil(a,b)         (a+b-1)/b
#define     gcd(a, b)         __gcd(a,b)
#define     min3(a,b,c)       min(a,min(b,c))
#define     max3(a,b,c)       max(a,max(b,c))
#define     lcm(a, b)         ((a)/gcd(a,b))*(b)
#define     min4(a,b,c,d)     min(d,min(a,min(b,c)))
#define     max4(a,b,c,d)     max(d,max(a,max(b,c)))
#define     input             freopen("input.txt","rt", stdin)
#define     output            freopen("output.txt","wt", stdout)


#define     all(v)            v.begin(),v.end()
#define     memz(u)           memset(u, 0, sizeof u)
#define     memn(u)           memset(u, -1, sizeof u)
#define     ps(x,y)           fixed<<setprecision(y)<<x
#define     for2D0(n,m)       for(ll i=0;i<n;i++)for(ll j=0;j<m;j++)
#define     for2D1(n,m)       for(ll i=1;i<=n;i++)for(ll j=1;j<=m;j++)
#define     Unique(X)         (X).resize(unique(all(X))-(X).begin())
#define     get_pos(c,x)      (lower_bound(c.begin(),c.end(),x)-c.begin())
#define     get_pos_up(c,x)   (upper_bound(c.begin(),c.end(),x)-c.begin())
#define     IOS               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


/*** STLs ***/
typedef vector <ll> vll;
typedef set <ll> sll;
typedef multiset <ll> msll;
typedef queue <ll> qll;
typedef stack <ll> stll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;
typedef map<string,ll> msl;
typedef priority_queue<ll> pql;
typedef priority_queue<ll,vector<ll>,greater<ll> > npql;


/*** BitWise Operations
///ll Set(ll N,ll pos){return N=N | (1<<pos);}
///ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
///bool check(ll N,ll pos){return (bool)(N & (1<<pos));}
***/


/*** Grids
///const ll fx[] = {+1,-1,+0,+0};
///const ll fy[] = {+0,+0,+1,-1};
///const ll fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const ll fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const ll fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const ll fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
***/


/*** Functions
///transform(data.begin(), data.end(), data.begin(),[](unsigned char c){ return std::tolower(c); });
///typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
///ll toll(string s){ll n=0,k=1;for(ll i=s.size()-1; i>=0; i--){n += ((s[i]-'0')*k);k*=10;}return n;}
///string tostring(ll x){string s="";while(x){s += (x%10)+'0';x/=10;}reverse(s.begin(),s.end());return s;}
///bool sortinrev(const pair<ll,ll> &a,const pair<ll,ll> &b)return (a.first > b.first);
///prime[]={2,4,2,4,6,2} //start loop from 29 to do prime factorization
///auto it = lower_bound(my_multiset.begin(), my_multiset.end(), 3);
///const auto pos = distance(my_multiset.begin(), it);
///priority_queue< pll ,vector<pll>,greater<pll> >p;
///lower_bound(all(v),r+1)-lower_bound(all(v),l);
///cout<<*X.find_by_order(0)<<endl;
///cout<<X.order_of_key(-5)<<endl;
///set< pair<ll,ll> >s;
///pair<ll,ll> p={3,2};
///auto lb=lower_bound(s.begin(),s.end(),p);
///cout<<(*lb).first<<" "<<(*lb).second<<endl;
***/


/*** Some Prlls ***/
#define en cout << '\n';
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'


vector<ll> t[4*mxx];

void build(ll a[], ll v, ll tl, ll tr)
{
    if (tl == tr)
    {
        t[v] = vector<ll>(1, a[tl]);
    }
    else
    {
        ll tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        merge(t[v*2].begin(), t[v*2].end(), t[v*2+1].begin(), t[v*2+1].end(),back_inserter(t[v]));
    }
}

ll query(ll v, ll tl, ll tr, ll l, ll r, ll x)
{
    if (l > r)return 0;
    if (l == tl && r == tr)
    {
        vector<ll>::iterator pos = lower_bound(t[v].begin(), t[v].end(), x);
        if (pos != t[v].end())return SZ(t[v])-(pos-t[v].begin());
        return 0;
    }
    ll tm = (tl + tr) / 2;
    ll val = query(v*2, tl, tm, l, min(r, tm), x) + query(v*2+1, tm+1, tr, max(l, tm+1), r, x);
    re val;
}



int main()
{
    IOS;
    ll tst=1;
    //cin>>tst;
    for(ll tt=1; tt<=tst; tt++)
    {
        //code
        ll n,q,aa,b,c;
        cin>>n;
        ll a[n+5];
        foR0(n)cin>>a[i];
        build(a,1,0,n-1);
        cin>>q;
        while(q--)
        {
            cin>>aa>>b>>c;
            cout<<query(1,0,n-1,aa-1,b-1,c+1)<<endl;
        }



    }


    return 0;
}
