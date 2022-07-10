#include<bits/stdc++.h>
#include<time.h>
#include <iomanip>
using namespace std;

#define          ll                     long long int
#define          pll                    pair < ll, ll>
#define          pb                     push_back
#define          scln2(x,y)             scanf("%lld %lld",&(x),&(y))
#define          SZ(v)                  v.size()
#define          ff                     first
#define          ss                     second



const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move



ll r,c,res=0;
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char v[51][51];
bool visited[51][51];
void dfs(ll x,ll y,ll pos)
{
    res=max(res,pos);
    visited[x][y]=true;
    if(v[x][y]=='Z')return ;
    for(ll i=0;i<8;i++)
    {
        ll x1=x+fx[i],y1=y+fy[i];
       // cout<<x<<" "<<y<<" "<<x1<<" "<<y1<<endl;
        if(x1>=0&&x1<r&&y1>=0&&y1<c&&v[x1][y1]==s[pos]&&!visited[x1][y1])
        {
           // cout<<"I am In"<<endl;
          //  cout<<v[x1][y1]<<endl;
          dfs(x1,y1,pos+1);
        }
    }

}

int main()
{
    ll casee=1;
    while(scln2(r,c))
    {
        vector< pll >h;
        if(!r&&!c)break;
        for(ll i=0; i<r; i++)
        {
            for(ll j=0; j<c; j++)
            {
                cin>>v[i][j];
                if(v[i][j]=='A')h.pb(make_pair(i,j));
            }
        }
        printf("Case %lld: ",casee++);
        for(ll i=0; i<SZ(h); i++)
        {
            dfs(h[i].ff,h[i].ss,1);
            memset(visited,0,sizeof(visited));
        }
        printf("%lld\n",res);
        res=0;
    }





    return 0;
}
