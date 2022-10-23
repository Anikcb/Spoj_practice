#include<bits/stdc++.h>
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
 
bool sortinrev(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.first > b.first);
}
 
///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------
 
///-----------------------Bitmask------------------
///int Set(int N,int pos){return N=N | (1<<pos);}
///int reset(int N,int pos){return N= N & ~(1<<pos);}
///bool check(int N,int pos){return (bool)(N & (1<<pos));}
///------------------------------------------------
 
ll A[1000000];
ll B[1000000];
map<ll, vector<ll> > node;
 
ll n,edge;
const long long int INF = 1e15;
vector< pair<ll,ll> > adj[10002];
 
vector<ll> restore_path(ll s, ll t, vector<ll> const& p)
{
    vector<ll> path;
    for (ll v = t; v != s; v = p[v])path.push_back(v);
 
    path.push_back(s);
    reverse(path.begin(), path.end());
    return path;
}
 
void dijkstra(ll s, vector<ll> & d, vector<ll> & p)
{
    d.assign(n+1, INF);
    p.assign(n+1, -1);
    d[s] = 0;
 
    set<pair<ll, ll>> q;
    q.insert({0, s});
    while (!q.empty())
    {
        ll v = q.begin()->second;
        q.erase(q.begin());
 
        for (auto edge : adj[v])
        {
            ll to = edge.first;
            ll len = edge.second;
 
            if (d[v] + len < d[to])
            {
                q.erase({d[to], to});
                d[to] = d[v] + len;
                p[to] = v;
                q.insert({d[to], to});
            }
        }
    }
}
 
int main()
{
     FLASH();
#ifndef ONLINE_JUDGE
     time_t time_t1, time_t2;
     time_t1 = clock();
#endif
     //Start
     ll t;
     cin>>t;
     while(t--)
     {
         unordered_map<string,ll>mp;
         ll x=1;
         cin>>n;
         for(ll i=0;i<n;i++)
         {
             string s;
             cin>>s;
             mp[s]=x++;
             ll a,b,c;
             cin>>a;
             while(a--)
             {
                 cin>>b>>c;
                 adj[mp[s]].pb(make_pair(b,c));
                 adj[b].pb(make_pair(mp[s],c));
             }
         }
         ll a;
         cin>>a;
         while(a--)
         {
             string s,t;
             cin>>s>>t;
            vector<ll>d(n+1),p(n+1);
            dijkstra(mp[s],d,p);
            cout<<d[mp[t]]<<endl;
         }
         for(ll i=1;i<=n;i++)adj[i].clear();
 
     }
 
 
 
 
 
 
 
 
#ifndef ONLINE_JUDGE
	time_t2 = clock();
	SETF();
	cerr<<"Time taken: "<<setprecision(7)<<(time_t2 - time_t1)/(double)CLOCKS_PER_SEC<<"\n";
	UNSETF();
#endif
 
 
 
    return 0;
}
