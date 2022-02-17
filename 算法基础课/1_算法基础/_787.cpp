#include <iostream>
using namespace  std;
const int N = 1e6+9;
int n;
int q[N],tmp[N];
 
void merge_sort(int q[],int l,int r)
{
    if(l>=r)  return;
    int mid=l+r>>1;
    merge_sort(q,l,mid); merge_sort(q,mid+1,r);
    int i=l,j=mid+1,k=0;
    while(i<=mid&&j<=r) //比较left和right那边元素更小
        if(q[i]<q[j]) tmp[k++]=q[i++];
        else tmp[k++]=q[j++];
    
    while(i<=mid) tmp[k++]=q[i++];  //将剩余元素合并到tmp数组
    while(j<=r) tmp[k++] =q[j++];
    for(int i=l, j=0;i<=r;i++,j++) q[i]=tmp[j]; //代回q数组
}
int main()
{
    scanf("%d",&n); 
    for(int i=0;i<n;i++) scanf("%d",&q[i]);
    merge_sort(q,0,n-1);
    for(int i=0;i<n;i++) printf("%d ",q[i]);
    return 0;
} 
