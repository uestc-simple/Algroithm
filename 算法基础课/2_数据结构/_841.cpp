//841. 字符串哈希
//https://www.acwing.com/problem/content/843/
//2021年12月12日
#include <iostream>
#include <algorithm> 

using namespace std;

typedef unsigned long long ULL;//溢出相当于取模

const int N = 100010, P = 131;//131 or 13331

int n, m;
char str[N];
ULL h[N], p[N];

ULL get(int l, int r)
{
    return h[r] - h[l - 1] * p[r - l + 1];
}

int main()
{
    scanf("%d%d", &n, &m);
    scanf("%s", str + 1);

    p[0] = 1;
    //前缀和公式 h[i]=h[i-1]×P+s[i] i∈[0,n−1]i∈[0,n−1] 
    //h为前缀和数组，s为字符串数组
    //区间和公式 h[l,r]=h[r]−h[l−1]×Pr−l+1
    for (int i = 1; i <= n; i ++ )
    {
        h[i] = h[i - 1] * P + str[i]; //hash为P进制的数
        p[i] = p[i - 1] * P;//预处理P^(x)
    }

    while (m -- )
    {
        int l1, r1, l2, r2;
        scanf("%d%d%d%d", &l1, &r1, &l2, &r2);

        if (get(l1, r1) == get(l2, r2)) puts("Yes");
        else puts("No");
    }

    return 0;
} 