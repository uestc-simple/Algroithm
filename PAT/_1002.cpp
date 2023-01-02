#include <bits/stdc++.h>
using namespace std;

const int N = 10005;
float a,b,c[N];       //系数
int ea,eb;            //指数
int main() 
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ea>>a,
        c[ea]+=a;        
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>eb>>b,
        c[eb]+=b;

    int cnt=0;
    for(int i=0;i<=1000;i++) 
    {
        if(c[i] != 0.0) cnt++;
    }

    cout<<cnt;
    for(int i=1000 ;i>=0;i--)
        if(c[i] != 0.0) printf(" %d %.1f", i, c[i]);    //输出格式%.1f

    return 0;
}