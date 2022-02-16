#include <iostream>

using namespace std;

const int N = 1e6+9;
int n,m,s[N],q[N];

int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) 
    {
        scanf("%d",&q[i]);
        if(i>0) s[i]=s[i-1]+q[i];
    };
    while(m--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        cout<<s[r]-s[l-1]<<endl;
    }
    return 0;
}