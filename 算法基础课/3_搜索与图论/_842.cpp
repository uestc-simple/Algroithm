#include <iostream>
using namespace std;
const int N = 10;

int n;
int path[N];//保存序列
//state 表示第i个数字是否用过
//path 存路径
void dfs(int u, int state)  //从第0层开始dfs
{
    if (u == n)  
    {
        for (int i = 0; i < n; i ++ ) printf("%d ", path[i]);
        puts("");

        return;
    }
    for (int i = 0; i < n; i++ )
        if (!(state >> i & 1))  //第i个数字没有用过
        {
            path[u] = i + 1;
            dfs(u + 1, state + (1 << i));
        }
}

int main()
{
    scanf("%d", &n);

    dfs(0, 0);

    return 0;
}  


