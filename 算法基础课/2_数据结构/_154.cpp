//AcWing 154. 滑动窗口
//https://www.acwing.com/activity/content/problem/content/868/

#include <bits/stdc++.h>
using namespace std;
const int N = 1000010;
int a[N], q[N], hh, tt = -1;  //队列q存窗口元素

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++ i)                       // 
    {
        scanf("%d", &a[i]);
        if ( k < i - q[hh] + 1) ++ hh;                  // 若队首出窗口，hh加1
        while (hh <= tt && a[i] <= a[q[tt]]) -- tt;    // 若队尾不单调，tt减1
        q[++tt] = i;                                   // 下标加到队尾
        if (i - k + 1 >= 0) printf("%d ", a[q[hh]]);       // 输出结果
    }
    cout << endl;
    hh = 0; tt = -1;                                   // 重置！
    for (int i = 0; i < n; ++ i)
    {
        if ( k < i - q[hh] + 1) ++ hh;
        while (hh <= tt && a[i] >= a[q[tt]]) -- tt;
        q[++ tt] = i;
        if (i + 1 >= k) printf("%d ", a[q[hh]]);
    }
    return 0;
}