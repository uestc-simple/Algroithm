//789. 数的范围
#include <iostream>
using namespace std;
const int N = 1e6+9;
int main()
{
    int n,m,q[N];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) scanf("%d",&q[i]);

    while(m--)
    {
        int x;scanf("%d",&x);
        int l=0,r=n-1;
        while(l<r)
        {
            int mid=l+r>>1;
            if(q[mid]>=x) r=mid; //确定左边界
            else l=mid+1;
        }
        if(q[l]!=x) printf("-1 -1\n");
        else           
        {              
            printf("%d ",l);
            int l=0,r=n-1;  
            while(l<r)
            {
                int mid=l+r+1>>1;
                if(q[mid]<=x) l=mid;  //确定右边界
                else r=mid-1;
            }    
            printf("%d\n",l);  
        }
    }   
    
    return 0;
}