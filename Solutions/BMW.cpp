#include<iostream>
#include<vector>
#include<algorithm>
#include<time.h>
#include <iomanip>
using namespace std;
 
#define          ll                     long long int
#define          EPS                    10E-10
#define          ull                    unsigned long long int
#define          db                     double
#define          pii                    pair < int, int>
#define          pll                    pair < ll, ll>
#define          MOD                    1000000007
#define          mxx                    100005
#define          vi                     vector<int>
#define          vl                     vector<ll>
#define          pb                     push_back
#define          sc                     scanf
#define          pf                     printf
#define          ff                     first
#define          ss                     second
#define          re                     return
#define          QI                     queue<int>
#define          SI                     stack<int>
#define          iseq(a,b)              (fabs(a-b)<eps)
#define          SZ(x)                  ((int) (x).size())
#define          scin(x)                scanf("%d",&(x))
#define          scin2(x,y)             scanf("%d %d",&(x),&(y))
#define          scln(x)                scanf("%lld",&(x))
#define          scln2(x,y)             scanf("%lld %lld",&(x),&(y))
#define          scch1(ch)              scanf("%s",ch)
#define          scch2(ch1,ch2)         scanf("%s %s",ch1,ch2)
#define          min3(a,b,c)            min(a,min(b,c))
#define          min4(a,b,c,d)          min(d,min(a,min(b,c)))
#define          max3(a,b,c)            max(a,max(b,c))
#define          max4(a,b,c,d)          max(d,max(a,max(b,c)))
#define          ms(a,b)                memset(a,b,sizeof(a))
#define          gcd(a, b)              __gcd(a,b)
#define          lcm(a, b)              ((a)*(b)/gcd(a,b))
#define          input                  freopen("input.txt","rt", stdin)
#define          output                 freopen("output.txt","wt", stdout)
#define          PI                     3.141592653589793238462643
#define          rep( i , a , b )       for( i=a ; i<b ; i++)
#define          rev( i , a , b )       for( i=a ; i>=b ; i--)
#define          repx( i ,a,b, x)       for( i=a ; i<b ; i+=x)
#define          RUN_CASE(t,T)          for(__typeof(t) t=1;t<=T;t++)
#define          zero(a)                memset(a,0,sizeof a)
#define          all(v)                 v.begin(),v.end()
#define          get_pos(c,x)           (lower_bound(c.begin(),c.end(),x)-c.begin())
#define          CASEL(t)               printf("Case %d:\n",t)
#define          Unique(X)             (X).erase(unique(all(X)),(X).end())
 
void FLASH() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
void SETF() {cout.ios_base::setf(ios_base::fixed); cerr.ios_base::setf(ios_base::fixed);}
void UNSETF() {cout.ios_base::unsetf(ios_base::fixed); cerr.ios_base::unsetf(ios_base::fixed);}
 
 
 
struct edge
{
    ll u, v, w;
    bool operator<(const edge& p) const
    {
        return w > p.w;
    }
};
ll parent[50005];
vector<edge> e;
 
ll find(ll r)
{
    return (parent[r] == r) ? r : parent[r]=find(parent[r]);
}
 
ll mst(ll n)
{
    sort(e.begin(), e.end());
    for (ll i = 1; i <= n; i++)parent[i] = i;
 
    ll count = 0, s = 1e18+9;
    for (ll i = 0; i < (ll)e.size(); i++)
    {
        ll u = find(e[i].u);
        ll v = find(e[i].v);
        if (u != v)
        {
            parent[u] = v;
            count++;
            if(find(n)==find(1))return e[i].w;
            if (count == n - 1)
                break;
        }
    }
    return -1;
}
 
 
int main()
{
    // FLASH();
#ifndef ONLINE_JUDGE
     time_t time_t1, time_t2;
     time_t1 = clock();
#endif
     //Start
     ll t;
     scln(t);
     while(t--)
     {
         ll n,m,w,x,y;
         scln2(n,m);
         for(ll i=0;i<m;i++)
         {
             scln(x);scln2(y,w);
             edge get;
             get.u=x;
             get.v=y;
             get.w=w;
             e.pb(get);
             get.u=y;
             get.v=x;
             get.w=w;
             e.pb(get);
         }
         ll val=mst(n);
         printf("%lld\n",val);
 
 
         e.clear();
         for(ll i=0;i<=n;i++)parent[i]=0;
     }
 
 
 
 
 
 
 
 
#ifndef ONLINE_JUDGE
	time_t2 = clock();
	SETF();
	cerr<<"Time taken: "<<setprecision(7)<<(time_t2 - time_t1)/(double)CLOCKS_PER_SEC<<"\n";
	UNSETF();
#endif
 
 
 
    return 0;
}
 
