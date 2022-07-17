#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair <ll, ll> pll;
#define mxx 90005
char T[mxx];
ll RA[mxx], tempRA[mxx];
ll SA[mxx], tempSA[mxx];
ll c[mxx],n;
ll Phi[mxx];
ll PLCP[mxx];
ll LCP[mxx];

void countingSort(ll k)
{
    ll i, sum, maxi = max(300ll, n);
    memset(c, 0, sizeof c);
    for (i = 0; i < n; i++)
        c[i + k < n ? RA[i + k] : 0]++;
    for (i = sum = 0; i < maxi; i++)
    {
        ll t = c[i];
        c[i] = sum;
        sum += t;
    }
    for (i = 0; i < n; i++)
        tempSA[c[SA[i]+k < n ? RA[SA[i]+k] : 0]++] = SA[i];
    for (i = 0; i < n; i++)
        SA[i] = tempSA[i];
}

void constructSA()
{
    ll i, k, r;
    for (i = 0; i < n; i++) RA[i] = T[i];
    for (i = 0; i < n; i++) SA[i] = i;
    for (k = 1; k < n; k <<= 1)
    {
        countingSort(k);
        countingSort(0);
        tempRA[SA[0]] = r = 0;
        for (i = 1; i < n; i++)
            tempRA[SA[i]] =
                (RA[SA[i]] == RA[SA[i-1]] && RA[SA[i]+k] == RA[SA[i-1]+k]) ? r : ++r;
        for (i = 0; i < n; i++)
            RA[i] = tempRA[i];
        if (RA[SA[n-1]] == n-1) break;
    }
}


void computeLCP()
{
    ll i, L;
    Phi[SA[0]] = -1;
    for (i = 1; i < n; i++)
        Phi[SA[i]] = SA[i-1];
    for (i = L = 0; i < n; i++)
    {
        if (Phi[i] == -1)
        {
            PLCP[i] = 0;
            continue;
        }
        while (T[i + L] == T[Phi[i] + L]) L++;
        PLCP[i] = L;
        L = max(L-1, 0ll);
    }
    for (i = 0; i < n; i++)
        LCP[i] = PLCP[SA[i]];
}


int main()
{
    cin>>T;
    n=strlen(T);
    T[n++]='$';
    ll cnt=0;
    vector<ll>v;
    constructSA();
    computeLCP();

    for(ll i=0;i<n;i++)
    {
        ll val=n-1-SA[i]-LCP[i];
        cnt+=val;
        v.push_back(cnt);
    }
    ll q;
    cin>>q;
    while(q--)
    {
        cin>>cnt;
        ll lb=lower_bound(v.begin(),v.end(),cnt)-v.begin();
        ll val=cnt-v[lb-1]+LCP[lb];
//        cout<<"lb = "<<lb<<" - "<<SA[lb]<<" - "<<SA[lb]+val<<endl;
        for(ll i=SA[lb];i<SA[lb]+val;i++)cout<<T[i];
        cout<<endl;
    }


}
