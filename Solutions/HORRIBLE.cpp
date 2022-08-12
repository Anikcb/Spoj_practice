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
 
 
/*** Optimization ***/
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
 
 
/*** Typedef ***/
typedef long long ll;
typedef unsigned long long ull;
 
 
/*** Input ***/
#define sci1(a) scanf("%d",&a)
#define sci2(a,b) scanf("%d %d",&a,&b)
#define scln1(a) scanf("%lld",&a)
#define scln2(a,b) scanf("%lld %lld",&a,&b)
#define scln3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
 
 
/*** Output ***/
#define pf1(a) printf("%d\n",a)
#define pf2(a,b) printf("%d %d\n",a,b)
#define pfln1(a) printf("%lld\n",a)
#define pfln2(a,b) printf("%lld %lld\n",a,b)
 
 
/*** Loops ***/
#define foR0(num) for(ll i = 0; i < num; i++)
#define foR1(num) for(ll i = 1; i <= num; i++)
#define foRev(num) for(ll i = num - 1; i >= 0; i--)
#define rep(i, x, n) for (ll i = x, _n = (n); i < _n; ++i)
#define forIn(arr, num) for(ll i = 0; i < num; i++) cin>>arr[i];
#define forIn1(arr, num) for(ll i = 1; i <= num; i++) cin>>arr[i];
#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');
 
 
/*** Define Values ***/
 
#define     ff                first
#define     ss                second
#define     re                return
#define     MP                make_pair
#define     pb                push_back
#define     SZ(x)             ((ll) (x).size())
 
 
#define     EPS               10E-10
#define     mxx               100005
#define     MOD               1000000007
#define     iseq(a,b)         (fabs(a-b)<EPS)
#define     PI                3.141592653589793238462643
 
 
#define     gcd(a, b)         __gcd(a,b)
#define     min3(a,b,c)       min(a,min(b,c))
#define     max3(a,b,c)       max(a,max(b,c))
#define     lcm(a, b)         ((a)*(b)/gcd(a,b))
#define     min4(a,b,c,d)     min(d,min(a,min(b,c)))
#define     max4(a,b,c,d)     max(d,max(a,max(b,c)))
#define     input             freopen("input.txt","rt", stdin)
#define     output            freopen("output.txt","wt", stdout)
 
 
#define     all(v)            v.begin(),v.end()
#define     mem(nam,val)      memset(nam, val, sizeof(nam))
#define     for2D0(n,m)       for(ll i=0;i<n;i++)for(ll j=0;j<m;j++)
#define     for2D1(n,m)       for(ll i=1;i<=n;i++)for(ll j=1;j<=m;j++)
#define     Unique(X)         (X).resize(unique(all(X))-(X).begin())
#define     get_pos(c,x)      (lower_bound(c.begin(),c.end(),x)-c.begin())
#define     get_pos_up(c,x)   (upper_bound(c.begin(),c.end(),x)-c.begin())
#define     IOS               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define     for2Dpnt(arr,n,m) for(ll i=0;i<n;i++){for(ll j=0;j<m;j++)cout<<arr[i][j]<<" ";cout<<endl;}
 
 
/*** STLs ***/
typedef vector <ll> vll;
typedef set <ll> sll;
typedef multiset <ll> msll;
typedef queue <ll> qll;
typedef stack <ll> stll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;
 
 
/*** BitWise Operations
///int Set(int N,int pos){return N=N | (1<<pos);}
///int reset(int N,int pos){return N= N & ~(1<<pos);}
///bool check(int N,int pos){return (bool)(N & (1<<pos));}
***/
 
 
/*** Grids
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
***/
 
 
/*** Functions
///transform(data.begin(), data.end(), data.begin(),[](unsigned char c){ return std::tolower(c); });
///typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
///ll toint(string s){ll n=0,k=1;for(int i=s.size()-1; i>=0; i--){n += ((s[i]-'0')*k);k*=10;}return n;}
///string tostring(ll x){string s="";while(x){s += (x%10)+'0';x/=10;}reverse(s.begin(),s.end());return s;}
///bool sortinrev(const pair<ll,ll> &a,const pair<ll,ll> &b)return (a.first > b.first);
///auto it = lower_bound(my_multiset.begin(), my_multiset.end(), 3);
///const auto pos = distance(my_multiset.begin(), it);
///priority_queue< pll ,vector<pll>,greater<pll> >p;
///lower_bound(all(v),r+1)-lower_bound(all(v),l);
///cout<<*X.find_by_order(0)<<endl;
///cout<<X.order_of_key(-5)<<endl;
***/
 
 
/*** Some Prints ***/
#define en cout << '\n';
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
 
 
 
ll arr[mxx];
 
struct info
{
    ll sum,prop;
} tree[mxx*3];
 
void built(ll node,ll b,ll e)
{
    if(b==e){tree[node].sum=arr[b];re;}
    ll left=2*node;
    ll right=2*node+1;
    ll mid=(b+e)/2;
    built(left,b,mid);
    built(right,mid+1,e);
    tree[node].sum=tree[left].sum+tree[right].sum;
}
 
void update(ll node,ll b,ll e,ll i,ll j,ll x)
{
    if(b>j||e<i)re;
    if(b>=i&&e<=j)
    {
        tree[node].sum+=((e-b+1)*x);
        tree[node].prop+=x;
        re;
    }
    ll left=2*node;
    ll right=2*node+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);
    tree[node].sum=tree[left].sum + tree[right].sum + ((e-b+1)*tree[node].prop);
}
 
ll query(ll node,ll b,ll e,ll i,ll j,ll carry=0)
{
    if(b>j||e<i)re 0;
    if(b>=i&&e<=j)
    {
        re tree[node].sum+(e-b+1)*carry;
    }
    ll left=2*node;
    ll right=2*node+1;
    ll mid=(b+e)/2;
    ll x=query(left,b,mid,i,j,carry+tree[node].prop);
    ll y=query(right,mid+1,e,i,j,carry+tree[node].prop);
    re x+y;
}
 
int main()
{
    IOS;
    ll tst=1;
    cin>>tst;
    for(ll tt=1; tt<=tst; tt++)
    {
        //code
        ll n,m,a,b,c,d;
        cin>>n>>m;
        while(m--)
        {
            cin>>a;
            if(a==0)
            {
                cin>>b>>c>>d;
                update(1,1,n,b,c,d);
            }
            else
            {
                cin>>b>>c;
                cout<<query(1,1,n,b,c,0)<<endl;
            }
        }
        for(ll i=0;i<(mxx*3);i++)tree[i].sum=0,tree[i].prop=0;
        mem(arr,0);
 
 
 
 
    }
 
 
    return 0;
}
