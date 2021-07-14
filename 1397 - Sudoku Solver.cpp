#include<bits/stdc++.h>
using namespace std;
#define    ll    int
ll box[10][10];
 
void print()
{
    for(ll i=0;i<9;i++)
    {
        for(ll j=0;j<9;j++)
        {
            printf("%d",box[i][j]);
        }
        printf("\n");
    }
}
 
bool is_safe(ll row,ll col,ll num)
{
    if(box[row][col]!=0)return false;
    for(ll i=0;i<9;i++)
    {
        if(box[i][col]==num||box[row][i]==num)return false;
    }
    ll row_r=row=(row/3)*3,col_c=(col/3)*3;
    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<3;j++)
        {
            if(box[i+row_r][j+col_c]==num)return false;
        }
    }
    return true;
}
 
bool find_pos(ll &row,ll &col)
{
    ll mn=1e5,cnt=0;
    for(ll i=0;i<9;i++)
    {
        for(ll j=0;j<9;j++)
        {
            cnt=0;
            if(box[i][j]==0)
            {
                for(ll k=1;k<=9;k++)
                {
                    if(is_safe(i,j,k))cnt++;
                }
                if(cnt<mn)
                {
                    mn=cnt;
                    row=i;col=j;
                }
            }
        }
    }
    if(mn>=10)return false;
    else return true;
}
bool Fun()
{
    int row,col;
    if(!find_pos(row,col))return true;
 
    for(ll i=1;i<=9;i++)
    {
        if(is_safe(row,col,i))
        {
            box[row][col]=i;
            if(Fun())return true;
            box[row][col]=0;
        }
    }
    return false;
}
 
int main()
{
    ll t,tst=1;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        for(ll i=0;i<9;i++)
        {
            for(ll j=0;j<9;j++)
            {
                 cin>>ch;
                 if(ch=='.')box[i][j]=0;
                 else box[i][j]=ch-'0';
            }
        }
        printf("Case %d:\n",tst++);
        Fun();
        print();
        memset(box,0,sizeof(box));
    }
    return 0;
}
 
