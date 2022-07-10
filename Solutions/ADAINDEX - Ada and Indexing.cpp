#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int endmark;
    node* next[26 + 1];
    node()
    {
        for (int i = 0; i < 26; i++)
            next[i] = NULL;
    }
} * root;

void insert(string str, int len)
{
    node* curr = root;
    for (int i = 0; i < len; i++)
    {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
        {
            node * extra;
            extra= new node;
            extra->endmark=0;
            curr->next[id]=extra;
            curr=curr->next[id];
            curr->endmark++;
        }
        else
        {
            curr=curr->next[id];
            curr->endmark++;
        }
    }
    return ;
}

long long int search(char* str, int len)
{
    node* curr = root;
    for (int i = 0; i < len; i++)
    {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
            return false;
        curr = curr->next[id];
    }
    return curr->endmark;
}


int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    root = new node;
    while(n--)
    {
        char str[1000005];
        scanf("%s", str);
        string s=str;
        insert(s,s.size());
    }
    for (int i = 1; i <= m; i++)
    {
        char str2[1000005];
        scanf("%s", str2);
        printf("%lld\n", search(str2, strlen(str2)));
    }
    return 0;
}
