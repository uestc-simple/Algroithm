#include <iostream>

using namespace std;
const int N=1e5+9;

int n,m,x;
int a[N],b[N];



int main()
{
    scanf("%d%d%d",&n,&m,&x);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);
    int j=m-1;
    for(int i=0;i<n;i++)
    {
        while(j>=0 && a[i]+b[j]>x) j--;
        if(j>=0 && a[i]+b[j]==x)
        {
            cout<<i<<" "<<j;
            break;
        }
    }
    
    return 0;
}