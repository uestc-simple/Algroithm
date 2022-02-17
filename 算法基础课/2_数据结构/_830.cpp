//AcWing 830. 单调栈
//https://www.acwing.com/problem/content/832/

#include <bits/stdc++.h>

using namespace std;

const int N=1e6+10;
int stk[N],idx;

int main()
{
    int n;
    cin>>n;
    int x;
    while(n--)
    {
        cin>>x;
        while(idx && stk[idx]>=x) idx--;  //当栈顶元素大于待入栈元素，出栈
        if(!idx) cout<<"-1 ";   //如果栈空，则没有比该元素小的值，输出-1
        else cout<<stk[idx]<<" ";  //否则此时，栈顶元素就是左侧第一个比它小的元素。
        stk[++idx]=x;  //入栈
    }
    return 0;  
} 