//786. 第k个数
//快选排序时间复杂度:O(n)
#include <iostream>

using namespace std;

const int N=1e6+9;
int q[N],n,k;

int quick_sort(int q[],int l,int r,int k)
{
    if(l>=r) return q[l];
    int x=q[l+r>>1],i=l-1,j=r+1;
    while(i<j)
    {
        do i++;while(q[i]<x);
        do j--;while(q[j]>x);
        if(i<j) swap(q[i],q[j]);
    }
    if(j-l+1>=k) 
        quick_sort(q,l,j,k);   //每次左边元素的个数是 s1 = j-l+1, 
    else 
        quick_sort(q,j+1,r,k-(j-l+1)); //若k <= s1下次递归区间是左边，否则右边
}
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&q[i]);
    printf("%d",quick_sort(q,0,n-1,k));
    return 0;
}