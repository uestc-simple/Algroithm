//831. KMP字符串
//acwing.com/problem/content/833/
//2021年12月11日
#include <bits/stdc++.h>

using namespace std;

const int N = 100010, M = 1000010;

int n, m;
int ne[N];
char s[M], p[N];

int main()
{
    cin >> n >> p + 1 >> m >> s + 1;
    for(int i = 2,j=0;i<=n;i++)
    {
        while(j && p[j+1]!= p[i])  j=ne[j];
        if(p[j+1]==p[i]) j++;
        ne[i]=j; 
    }
    for(int i=1,j=0;i<=m;i++)
    {
        while(j && s[i]!=p[j+1]) j=ne[j];
        if(s[i]==p[j+1]) j++;
        if(j==n)
        {
            cout<<i-n<<" ";
            j=ne[j];
        } 
    }

    return 0;
}
