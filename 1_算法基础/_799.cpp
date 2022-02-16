#include <iostream>
#include <string.h>

using namespace std;
const int N = 1e6+9;
int q[N],s[N],n;//s[N]存放该元素的个数

int main()
{
    scanf("%d", &n);
    for(int i = 0;i < n; i++)   scanf("%d",&q[i]);
    int res=0,j=0;
    for(int i = 0;i < n; i++)
    {
        s[q[i]]++;
        while(s[q[i]]>1)  //当有重复元素时j指针右移
            s[q[j++]]--; //s[q[j]]--; j++;
        res = max(res,i-j+1);
    }
    printf("%d",res);
}   

